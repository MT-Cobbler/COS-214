#include "RemoteControlVehicle.h"
#include "RemoteControlCar.h"
#include "RemoteControlPlane.h"
#include "RemoteControlRocket.h"

#include "RocketAdapter.h"
#include "Button.h"
#include "Command.h"

#include "TurnOn.h"
#include "TurnOff.h"
#include "MoveForward.h"
#include "MoveBackward.h"

#include <iostream>

using namespace std;

int main()
{

    RemoteControlVehicle *car = new RemoteControlCar();
    RemoteControlVehicle *plane = new RemoteControlPlane();
    RemoteControlRocket *rocket = new RemoteControlRocket();

    Command *carOn = new TurnOn();
    carOn->setReceiver(car);
    Button *carOnSwitch = new Button(carOn);

    Command *carOff = new TurnOff();
    carOff->setReceiver(car);
    Button *carOffSwitch = new Button(carOff);

    Command *carForward = new MoveForward();
    carForward->setReceiver(car);
    Button *carForwardBtn = new Button(carForward);

    Command *carBackward = new MoveBackward();
    carBackward->setReceiver(car);
    Button *carBackwardBtn = new Button(carBackward);

    Command *planeOn = new TurnOn();
    planeOn->setReceiver(plane);
    Button *planeOnSwitch = new Button(planeOn);

    Command *planeOff = new TurnOff();
    planeOff->setReceiver(plane);
    Button *planeOffSwitch = new Button(planeOff);

    Command *planeForward = new MoveForward();
    planeForward->setReceiver(plane);
    Button *planeForwardBtn = new Button(planeForward);

    Command *planeBackward = new MoveBackward();
    planeBackward->setReceiver(plane);
    Button *planeBackwardBtn = new Button(planeBackward);

    RocketAdapter *rocketAdapter = new RocketAdapter(rocket);

    Command *rocketOn = new TurnOn();
    rocketOn->setReceiver(rocketAdapter);
    Button *rocketOnSwitch = new Button(rocketOn);

    Command *rocketOff = new TurnOff();
    rocketOff->setReceiver(rocketAdapter);
    Button *rocketOffSwitch = new Button(rocketOff);

    Command *rocketForward = new MoveForward();
    rocketForward->setReceiver(rocketAdapter);
    Button *rocketForwardBtn = new Button(rocketForward);

    Command *rocketBackward = new MoveBackward();
    rocketBackward->setReceiver(rocketAdapter);
    Button *rocketBackwardBtn = new Button(rocketBackward);

    cout << "Now going to start my RC Car!" << endl;
    carOnSwitch->press();
    cout << "I will now move the car forward until I can't see it anymore!" << endl;
    carForwardBtn->press();
    cout << "The car is out of sight, I will now drive it backwards so I can see it again!" << endl;
    carBackwardBtn->press();
    cout << "I am now tired of playing with the car, time to play with another toy..." << endl;
    carOffSwitch->press();

    cout << "Now going to start my RC Plane!" << endl;
    planeOnSwitch->press();
    cout << "Let's see how high this bird can fly!" << endl;
    planeForwardBtn->press();
    cout << "Woah slow down buddy, come a little closer." << endl;
    planeBackwardBtn->press();
    cout << "After hitting someone in the head, I think it will be better if I go home..." << endl;
    planeOffSwitch->press();

    cout << "Jokes! You thought I was leaving, I just fetched my rocket!" << endl;
    cout << "3...2...1... Blast off!" << endl;
    rocketOnSwitch->press();
    cout << "Time to speed up!" << endl;
    rocketForwardBtn->press();
    cout << "TIme to slow down a bit." << endl;
    rocketBackwardBtn->press();
    cout << "Coming down for landing." << endl;
    rocketOffSwitch->press();

    return 0;
}