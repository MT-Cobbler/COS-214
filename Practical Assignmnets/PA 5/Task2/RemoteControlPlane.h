#ifndef RemoteControlPlane_H
#define RemoteControlPlane_H
#include <iostream>
#include "RemoteControlVehicle.h"
using namespace std;
class RemoteControlPlane : public RemoteControlVehicle
{
private:
    /* data */
public:
    RemoteControlPlane();
    ~RemoteControlPlane();
    void on();
    void off();
    void forward();
    void backward();
};
#endif