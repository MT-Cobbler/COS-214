#ifndef Command_H
#define Command_H

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
    virtual ~Command();
    virtual void execute() = 0;
    virtual void undo() = 0;
    RemoteControlVehicle *getReceiver();
};

#endif
