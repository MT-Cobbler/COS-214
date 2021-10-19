#include "RemoteControlCar.h"
#include "RemoteControlPlane.h"

#include <iostream>

using namespace std;

int main(){
    // create remotecontrol car
    RemoteControlVehicle* newVehicle = new RemoteControlCar();
    newVehicle->on();
    newVehicle->off();
    newVehicle->forward();
    newVehicle->backward();

    newVehicle = new RemoteControlPlane();
    newVehicle->on();
    newVehicle->off();
    newVehicle->forward();
    newVehicle->backward();

    return 0;
}