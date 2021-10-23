#include "RemoteControlVehicle.h"
#include "RemoteControlCar.h"
#include "RemoteControlPlane.h"
#include "RemoteControlRocket.h"
// commands
#include "TurnOn.h"
#include "TurnOff.h"
#include "MoveForward.h"
#include "MoveBackward.h"
// adpater
#include "RocketAdapter.h"
#include "Button.h"
#include "Command.h"

#include <iostream>

using namespace std;

int main()
{

    RemoteControlVehicle* vehicle;
    Command *c; //commands
    Button *b;  // buttons

    /* -------- Car Commands and Buttons ---------- */
    vehicle = new RemoteControlCar();

    c = new TurnOn();
    c->setReceiver(vehicle);
    b = new Button(c);
    cout << "Testing RC car" << endl;
    cout << "\t";
    b->press();
    
    c = new MoveForward();
    cout << "Testing 20 meters distance." << endl;
    c->setReceiver(vehicle);
    b = new Button(c);
    cout << "\t";
    b->press();

    c = new MoveBackward();
    cout << "Made it 20 meters forward, not testing 20 meters reverse." << endl;
    c->setReceiver(vehicle);
    b = new Button(c);
    cout << "\t";
    b->press();

    c = new TurnOff();
    cout << "RC car battery is dead." << endl;
    c->setReceiver(vehicle);
    b = new Button(c);
    cout << "\t";
    b->press();

    cout << endl;

    /* -------- Plane Commands and Buttons ---------- */
    vehicle = new RemoteControlPlane();

    c = new TurnOn();
    c->setReceiver(vehicle);
    b = new Button(c);
    cout << "Testing RC plane" << endl;
    cout << "\t";
    b->press();
    
    c = new MoveForward();
    cout << "Testing 20 meters up." << endl;
    c->setReceiver(vehicle);
    b = new Button(c);
    cout << "\t";
    b->press();

    c = new MoveBackward();
    cout << "Made it 20 meters up, now to bring it down." << endl;
    c->setReceiver(vehicle);
    b = new Button(c);
    cout << "\t";
    b->press();

    c = new TurnOff();
    cout << "RC plane made it back safely." << endl;
    c->setReceiver(vehicle);
    b = new Button(c);
    cout << "\t";
    b->press();

    cout << endl;
    
    /* -------- Rocket Adapter Here ---------- */
    RemoteControlRocket* rocket = new RemoteControlRocket();
    RocketAdapter *rocketAdapter = new RocketAdapter(rocket);

    c = new TurnOn();
    c->setReceiver(rocketAdapter);
    b = new Button(c);
    cout << "Testing RC rocket" << endl;
    cout << "Taking off in: 3...2...1. Lift Off!" << endl;
    cout << "\t";
    b->press();

    c = new MoveForward();
    c->setReceiver(rocketAdapter);
    b = new Button(c);
    cout << "Trying out its maximum acceleration" << endl;
    cout << "\t";
    b->press();

    c = new MoveBackward();
    c->setReceiver(rocketAdapter);
    b = new Button(c);
    cout << "Rocket went super high super quickly. Time to bring it down." << endl;
    cout << "\t";
    b->press();

    c = new TurnOff();
    cout << "Rocket must slowly come down so it won't crash." << endl;
    c->setReceiver(rocketAdapter);
    b = new Button(c);
    cout << "\t";
    b->press();
    cout << "Rocket landed safely." << endl;
    
    return 0;
}