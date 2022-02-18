#include "HelloImp.h"
#include "servant/Application.h"
#include <thread>
#include <mutex>

# define QUESTION "who are you"

using namespace std;
using namespace tars;

//////////////////////////////////////////////////////
void HelloImp::initialize()
{
    _xPrx = Application::getCommunicator()->stringToProxy<XzerPrx>("TestApp.XzerServer.XzerObj@tcp -h 172.25.0.3 -p 26543 ");
}

//////////////////////////////////////////////////////
void HelloImp::destroy()
{
    //destroy servant here:
    //...
}

/////////////////////////////////////////////////////

void HelloImp::sync()
{
	std::string name;
	try
	{
	    _xPrx->handleHello(QUESTION, name);
	}
	catch(exception& ex)
	{
	    TLOG_DEBUG( "exception: " << ex.what() << endl);
	}
	
	TLOG_DEBUG("sync hello "<< name << endl);

}

/////////////////////////////////////////////////////
class XzerCallback : public XzerPrxCallback
{
public:
    
	virtual void callback_handleHello(tars::Int32 ret, const std::string& name)
    {
        TLOG_DEBUG("callback_handleHello_async hello "<< name << endl);
    }
    
	virtual void callback_handleHello_exception(tars::Int32 ret)
	{
        TLOG_DEBUG("callback_handleHello_async_exception iRet = "<< ret << endl);
	}

};

void HelloImp::async()
{

    XzerPrxCallbackPtr cb = new XzerCallback();
	_xPrx->async_handleHello(cb,QUESTION);

}

//////////////////////////////////////////////////////

class XzerCoroCallback : public XzerCoroPrxCallback
{
public:

    virtual void callback_handleHello(tars::Int32 ret, const std::string& name)
    {
        TLOG_DEBUG("callback_handleHello_coro hello "<< name << endl);
    }

    virtual void callback_handleHello_exception(tars::Int32 ret)
    {
        TLOG_DEBUG("callback_handleHello_coro_exception iRet = "<< ret << endl);
    } 

};


void HelloImp::coro()
{

    CoroParallelBasePtr cPtr = new CoroParallelBase(1);
    
	XzerCoroPrxCallbackPtr cb = new XzerCoroCallback();
    cb->setCoroParallelBasePtr(cPtr);
	
	_xPrx->coro_handleHello(cb,QUESTION);
    
	coroWhenAll(cPtr);
}

