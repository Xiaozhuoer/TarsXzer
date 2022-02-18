#include "XzerImp.h"
#include "servant/Application.h"
#include "XzerServer.h"
#include "servant/Communicator.h"
using namespace std;

//////////////////////////////////////////////////////
void XzerImp::initialize()
{
    //initialize servant here:
    //...
    _hPrx = Application::getCommunicator()->stringToProxy<HelloPrx>("TestApp.HelloServer.HelloObj@tcp -h 172.25.0.3 -p 18865 ");
     //synTestCall();

}

//////////////////////////////////////////////////////
void XzerImp::destroy()
{
    //destroy servant here:
    //...
}

void XzerImp::syncTestCall()
{
     TLOG_DEBUG("syncTestCall "<< endl);
    _hPrx->sayHello("xzer");
}

std::string XzerImp::handleHello(const std::string &str,tars::TarsCurrentPtr current)
{
   TLOG_DEBUG("handleHello "<< endl);
   TLOG_DEBUG( str << endl);
   return "Xzer";
}

/*
void XzerImp::async_handleHello(HelloPrxCallBack cb,const std::string &str)
{
   TLOG_DEBUG("async_handleHello "<< endl);
   TLOG_DEBUG( str << endl);
   cb->callback_sayHello("async_xzer");
}
*/
