#include "RocketAdapter.h"

RocketAdapter::RocketAdapter(RemoteControlRocket *a)
{
    adaptee = a;
}

RocketAdapter::~RocketAdapter()
{
}

void RocketAdapter::on()
{
    if (getOn()) //meaning it is off
    {
        cout << "The RC rocket is already on!" << endl;
    }
    else
    {
        setOn(true);
        adaptee->takeOff();
    }
}

void RocketAdapter::off()
{
    if (getOn())
    {
        setOn(false);
        adaptee->stopLaunch();
    }
    else
    {
        cout << "The RC rocket is already off!" << endl;
    }
}

void RocketAdapter::forward()
{
    if (getOn())
    {
        adaptee->increaseThrottle();
    }
    else
    {
        cout << "The RC rocket is off!" << endl;
    }
}
void RocketAdapter::backward()
{
    if (getOn()) 
    {
        adaptee->decreaseThrottle();
    }
    else
    {
        cout << "The RC rocket is off!" << endl;
    }
}