#include "Speed.h"

Speed::Speed()
{
}
Speed::~Speed()
{
}

void Speed::execute()
{
    if (getReceiver()->getType() == "Car")
    {
        getReceiver()->handleRequest();
    }
    else
    {
        cout << "Looking for car." << endl;
        for (RemoteControlVehicle *ptr = getReceiver()->getNext(); ptr != nullptr; ptr = ptr->getNext())
        {
            if (ptr->getType() == "Car")
            {
                ptr->handleRequest();
                return;
            }
        }
    }
}
void Speed::undo()
{
}
