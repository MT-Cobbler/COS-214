#include "RemoteControlVehicle.h"

RemoteControlVehicle::RemoteControlVehicle()
{
    this->_on = false;
}
RemoteControlVehicle::~RemoteControlVehicle() {}

bool RemoteControlVehicle::getOn() { return _on; }
void RemoteControlVehicle::setOn(bool o) { _on = o; }
