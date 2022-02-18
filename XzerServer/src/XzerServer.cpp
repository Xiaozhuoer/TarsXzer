#include "XzerServer.h"
#include "XzerImp.h"

using namespace std;

XzerServer g_app;

/////////////////////////////////////////////////////////////////
void
XzerServer::initialize()
{
    //initialize application here:
    //...

    addServant<XzerImp>(ServerConfig::Application + "." + ServerConfig::ServerName + ".XzerObj");
}
/////////////////////////////////////////////////////////////////
void
XzerServer::destroyApp()
{
    //destroy application here:
    //...
}
/////////////////////////////////////////////////////////////////
int
main(int argc, char* argv[])
{
    try
    {
        g_app.main(argc, argv);
        g_app.waitForShutdown();
    }
    catch (std::exception& e)
    {
        cerr << "std::exception:" << e.what() << std::endl;
    }
    catch (...)
    {
        cerr << "unknown exception." << std::endl;
    }
    return -1;
}
/////////////////////////////////////////////////////////////////
