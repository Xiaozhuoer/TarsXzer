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
    void sync();
    void async();
    void coro();

private:
    XzerPrx _xPrx;    
};
#endif
