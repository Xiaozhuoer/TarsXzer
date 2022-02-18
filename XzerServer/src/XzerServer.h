#ifndef _XzerServer_H_
#define _XzerServer_H_

#include <iostream>
#include "servant/Application.h"

using namespace tars;

/**
 *
 **/
class XzerServer : public Application
{
public:
    /**
     *
     **/
    virtual ~XzerServer() {};

    /**
     *
     **/
    virtual void initialize();

    /**
     *
     **/
    virtual void destroyApp();
};

extern XzerServer g_app;

////////////////////////////////////////////
#endif
