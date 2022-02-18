#ifndef _HelloImp_H_
#define _HelloImp_H_

#include "servant/Application.h"
#include "Hello.h"
#include "Xzer.h"

using namespace TestApp; 
/*
 *
 */
class HelloImp : public TestApp::Hello
{
public:
    /**
     *
     */
    virtual ~HelloImp() {}

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
    virtual int test(tars::TarsCurrentPtr current)
    { 
       sync();
       async(); 
       coro();
       return 0;
    }
    virtual int sayHello(const std::string &name, tars::TarsCurrentPtr current);
    virtual void handleXzer(const std::string &str, tars::TarsCurrentPtr current);
    void sync();
    void sendXzer(const std::string &str);
    void async();
    void coro();

private:
    XzerPrx _xPrx;    
};
#endif
