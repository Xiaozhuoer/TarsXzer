#include "HelloImp.h"
#include "servant/Application.h"
#include <thread>
#include <mutex>
using namespace std;
using namespace tars;


std::mutex mu;
std::mutex strXzerMu;
std::string strXzer;
int flag;
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
//////////////////////////////////////////////////////
int HelloImp::sayHello(const std::string &name, tars::TarsCurrentPtr current)
{
    return 0;
}

void HelloImp::sync()
{ 
    std::string str = "who are you";
    std::thread t1(&HelloImp::sendXzer,this,str);
    t1.join();
    strXzerMu.lock();
    TLOG_DEBUG("Hello " << strXzer << endl);
    strXzerMu.unlock();
}

void HelloImp::sendXzer(const std::string &str)
{    
    strXzerMu.lock();
    strXzer = _xPrx->handleHello(str);
    strXzerMu.unlock();    
}

void HelloImp::handleXzer(const std::string &str, tars::TarsCurrentPtr current)
{   
     TLOG_DEBUG("handleXzer "<< endl);
     strXzerMu.lock();
     strXzer = str;
     strXzerMu.unlock();
}

/////////////////////////////////////////////////////
class XzerCallback : public XzerPrxCallback
{
public:
    void callback_handleHello(const std::string& ret)
    {
	TLOG_DEBUG("callback_handleHello_async hello "<< ret << endl);
    }
};

void HelloImp::async()
{
    std::string str = "who are you";
    XzerPrxCallbackPtr cb = new XzerCallback();
    _xPrx->async_handleHello(cb,"who are you");

}

//////////////////////////////////////////////////////

class XzerCoroCallback : public XzerCoroPrxCallback
{
public:
    void callback_handleHello(const std::string& ret)
    {
        TLOG_DEBUG("callback_handleHello_coro hello "<< ret << endl);
    }
};


void HelloImp::coro()
{
    std::string str = "who are you";
    CoroParallelBasePtr cPtr = new CoroParallelBase(1);
    XzerCoroPrxCallbackPtr cb = new XzerCoroCallback();
    cb->setCoroParallelBasePtr(cPtr);
    _xPrx->coro_handleHello(cb,"who are you");
    coroWhenAll(cPtr);
    
}

