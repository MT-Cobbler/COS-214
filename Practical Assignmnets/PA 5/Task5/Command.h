#ifndef COMMAND_H
#define COMMAND_H

#include "RemoteControlVehicle.h"

#include <iostream>

using namespace std;

class Command
{
private:
    RemoteControlVehicle *receiver;
public:
    Command();
    Command(RemoteControlVehicle *v);
    ~Command();
    virtual void execute() = 0;
    virtual void undo() = 0;
    RemoteControlVehicle *getReceiver();
    void setReceiver(RemoteControlVehicle* v);
};

#endif
