#ifndef _XzerImp_H_
#define _XzerImp_H_

#include "servant/Application.h"
#include "Xzer.h"
#include "Hello.h"

using namespace TestApp;
/**
 *
 *
 */
class XzerImp : public TestApp::Xzer
{
public:
    /**
     *
     */
    virtual ~XzerImp() {}

    /**
     *
     */
    virtual void initialize();

    /**
     *
     */
    virtual void destroy();

    /**
     *
     */
    virtual int test(tars::TarsCurrentPtr current) { return 0;}
    void  syncTestCall();
    std::string handleHello(const std::string &str, tars::TarsCurrentPtr current);

private:
    HelloPrx _hPrx;
};
/////////////////////////////////////////////////////
#endif
