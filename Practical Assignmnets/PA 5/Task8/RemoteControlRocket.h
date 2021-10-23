#ifndef REMOTECONTROLROCKET_H
#define REMOTECONTROLROCKET_H

#include "RemoteControlVehicle.h"

#include <iostream>

using namespace std;

class RemoteControlRocket
{
public:
    RemoteControlRocket();
    ~RemoteControlRocket();
    void takeOff();
    void stopLaunch();
    void increaseThrottle();
    void decreaseThrottle();
};
#endif
