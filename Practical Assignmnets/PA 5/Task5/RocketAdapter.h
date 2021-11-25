#ifndef ROCKETADAPTER_H
#define ROCKETADAPTER_H

#include "RemoteControlRocket.h"

#include <iostream>

using namespace std;
// Adapter
class RocketAdapter : public RemoteControlVehicle
{
private:
    RemoteControlRocket *adaptee;
public:
    RocketAdapter(RemoteControlRocket *adaptee);
    ~RocketAdapter();
    void on();
    void off();
    void forward();
    void backward();
};
#endif
