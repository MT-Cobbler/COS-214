#include "Command.h"

Command::Command()
{
}

Command::~Command()
{
}
Command::Command(RemoteControlVehicle *v)
{
    receiver = v;
}


RemoteControlVehicle *Command::getReceiver()
{
    return receiver;
}