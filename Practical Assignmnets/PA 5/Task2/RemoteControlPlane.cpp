#include "RemoteControlPlane.h"

RemoteControlPlane::RemoteControlPlane(/* args */)
{
}

RemoteControlPlane::~RemoteControlPlane()
{
}

void RemoteControlPlane::on()
{
    if (getOn())
    {
        cout << "RC plane is already on." << endl;
    }
    else
    {
        cout << "RC plane is turned on." << endl;
        setOn(true);
    }
}

void RemoteControlPlane::off()
{
    if (getOn())
    {
        cout << "RC plane is turned off." << endl;
        setOn(true);
    }
    else
    {
        cout << "RC plane is already off." << endl;
    }
}

void RemoteControlPlane::forward()
{
    if (getOn())
    {
        cout << "RC plane pulls up into a vertical climb." << endl;
    }
    else
    {
        cout << "The RC plane is not on." << endl;
    }
}

void RemoteControlPlane::backward()
{
    if (getOn())
    {
        cout << "RC plane points its nose down into a dive." << endl;
    }
    else
    {
        cout << "The RC plane is not on." << endl;
    }
}