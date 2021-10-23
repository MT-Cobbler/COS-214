#ifndef REMOTECONTROLVEHICLE_H
#define REMOTECONTROLVEHICLE_H

#include <iostream>
using namespace std;

class RemoteControlVehicle
{
private:
    bool _on;
    RemoteControlVehicle *next;
    string type;

public:
    RemoteControlVehicle();
    virtual ~RemoteControlVehicle();
    virtual void on() = 0;
    virtual void off() = 0;
    virtual void forward() = 0;
    virtual void backward() = 0;
    virtual void handleRequest() = 0;
    void setNext(RemoteControlVehicle* );
    RemoteControlVehicle* getNext();
    bool getOn();
    void setOn(bool o);
    bool getOn();
    void setOn(bool onoff);
    string getType();
    void setType(string);
};
#endif