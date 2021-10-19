#include "RemoteControlCar.h"

RemoteControlCar::RemoteControlCar(/* args */)
{
}

RemoteControlCar::~RemoteControlCar()
{
}

void RemoteControlCar::on()
{
    if (getOn())
    {
        cout << "RC car is already on." << endl;
    }
    else
    {
        cout << "RC car is turned on." << endl;
        setOn(true);
    }
}

void RemoteControlCar::off()
{
    if (getOn())
    {
        cout << "RC car is turned off." << endl;
        setOn(true);
    }
    else
    {
        cout << "RC car is already off." << endl;
    }
}

void RemoteControlCar::forward()
{
    if (getOn())
    {
        cout << "RC car drives forward quickly." << endl;
    }
    else
    {
        cout << "The RC car is not turned on." << endl;
    }
}

void RemoteControlCar::backward()
{
    if (getOn())
    {
        cout << "RC car reverses backward carefully." << endl;
    }
    else
    {
        cout << "RC car is not on." << endl;
    }
}