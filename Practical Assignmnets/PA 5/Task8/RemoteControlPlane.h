#ifndef REMOTECONTROLPLANE_H
#define REMOTECONTROLPLANE_H

#include "RemoteControlVehicle.h"

#include <iostream>

using namespace std;

class RemoteControlPlane : public RemoteControlVehicle
{
public:
    RemoteControlPlane();
    ~RemoteControlPlane();
    void on();
    void off();
    void forward();
    void backward();
    void handleRequest();
};
#endif