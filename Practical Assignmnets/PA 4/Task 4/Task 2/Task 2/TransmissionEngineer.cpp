#include "TransmissionEngineer.h"

TransmissionEngineer::TransmissionEngineer(string na, NetworkElement* n){
   // cout << "CSCore engineer\n";
    _networkElement = n;
    name = na;
    // _networkElement->setAlarm("clear");
}

TransmissionEngineer::~TransmissionEngineer(){
    delete _networkElement;
}

void TransmissionEngineer::update(){
    alarmStatus = _networkElement->getAlarm();
}

string TransmissionEngineer::getName(){
    return this->name;
}
string TransmissionEngineer::getAlarm(){
    return this->alarmStatus;
}
void TransmissionEngineer::setAlarm(string changeTo){
    alarmStatus = changeTo;
    _networkElement->setAlarm(alarmStatus);
}
