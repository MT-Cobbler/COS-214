#include "PSCoreEngineer.h"

PSCoreEngineer::PSCoreEngineer(string na, NetworkElement* n){
     // cout << "CSCore engineer\n";
    _networkElement = n;
    name = na;
    // _networkElement->setAlarm("clear");
}

PSCoreEngineer::~PSCoreEngineer(){
    delete _networkElement;
}

void PSCoreEngineer::update(){
    alarmStatus = _networkElement->getAlarm();
}

string PSCoreEngineer::getName(){
    return this->name;
}
string PSCoreEngineer::getAlarm(){
    return this->alarmStatus;
}

void PSCoreEngineer::setAlarm(string changeTo){
    alarmStatus = changeTo;
    _networkElement->setAlarm(alarmStatus);
}
