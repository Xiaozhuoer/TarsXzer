#include "XzerImp.h"
#include "servant/Application.h"
#include "XzerServer.h"
#include "servant/Communicator.h"
using namespace std;

//////////////////////////////////////////////////////
void XzerImp::initialize()
{
    //_hPrx = Application::getCommunicator()->stringToProxy<HelloPrx>("TestApp.HelloServer.HelloObj@tcp -h 172.25.0.3 -p 18865 ");

}

//////////////////////////////////////////////////////
void XzerImp::destroy()
{
    //destroy servant here:
    //...
}

tars::Int32 XzerImp::handleHello(const std::string &str,std::string &name ,tars::TarsCurrentPtr current)
{
	TLOG_DEBUG( str << endl);

	name = "xzer";

	return 0;
}

