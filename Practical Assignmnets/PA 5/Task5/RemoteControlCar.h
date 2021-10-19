#ifndef REMOTECONTROLCAR_H
#define REMOTECONTROLCAR_H

#include "RemoteControlVehicle.h"

#include <iostream>

using namespace std;

class RemoteControlCar : public RemoteControlVehicle
{
public:
    RemoteControlCar();
    ~RemoteControlCar();
    void on();
    void off();
    void forward();
    void backward();
};
#endif