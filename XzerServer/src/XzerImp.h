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
    virtual int handleHello(const std::string &str, std::string &name ,tars::TarsCurrentPtr current);

private:
    HelloPrx _hPrx;
};
/////////////////////////////////////////////////////
#endif
