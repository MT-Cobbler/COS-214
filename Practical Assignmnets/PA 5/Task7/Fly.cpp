#include "Fly.h"

Fly::Fly()
{

}

Fly::~Fly()
{

}

void Fly::execute()
{
    if(this->getReceiver()->getType() == "Plane")//meaning it should be able to handle the request
    {
        this->getReceiver()->handleRequest();
    }
    else //send it to next in line to see if it can handle it
    {
        cout<<"Since the first receiver wasn't a plane, now going to go through the list and find a plane"<<endl;
        RemoteControlVehicle* ptr = this->getReceiver()->getNextHandler();
        while(ptr != nullptr)
        {
            if(ptr->getType() == "Plane")
            {
                ptr->handleRequest();
                return;
            }
            ptr = ptr->getNextHandler();
        }
    }
}

void Fly::undo()
{
    
}