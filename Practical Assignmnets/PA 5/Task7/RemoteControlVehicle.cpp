#include "RemoteControlVehicle.h"

RemoteControlVehicle::RemoteControlVehicle() { _on = false; }
RemoteControlVehicle::~RemoteControlVehicle() { delete next; }
bool RemoteControlVehicle::getOn() { return _on; }
void RemoteControlVehicle::setOn(bool o) { _on = o; }
string RemoteControlVehicle::getType() { return type; }
void RemoteControlVehicle::setType(string t) { type = t; }
void RemoteControlVehicle::setNext(RemoteControlVehicle *r) { next = r; }
string RemoteControlVehicle::getType() { return type; }
void RemoteControlVehicle::setType(string type) { type = type; }
RemoteControlVehicle *RemoteControlVehicle::getNext() { return next; }