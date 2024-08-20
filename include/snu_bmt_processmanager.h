#ifndef SNU_BMT_PROCESSMANAGER_H
#define SNU_BMT_PROCESSMANAGER_H

#include "snu_bmt_interface.h"
#include "logmanager.h"
#include <iostream>
#include <memory>

using namespace std;

class SNU_BMT_ProcessManager
{
private:
    shared_ptr<SNU_BMT_Interface> interface;
    shared_ptr<LogManager> logManager;


public:
    explicit SNU_BMT_ProcessManager(shared_ptr<SNU_BMT_Interface> interface, shared_ptr<LogManager> logManager);
    void conductBMT();

private:
    void process_1();
    void process_2();
    void process_3();
    void process_4();
};

#endif // SNU_BMT_PROCESSMANAGER_H
