#include "PowerEngineer.h"

PowerEngineer::PowerEngineer(string na, NetworkElement* n){
     // cout << "CSCore engineer\n";
    _networkElement = n;
    name = na;
    // _networkElement->setAlarm("clear");
}

PowerEngineer::~PowerEngineer(){
    delete _networkElement;
}

void PowerEngineer::update(){
    alarmStatus = _networkElement->getAlarm();
}

string PowerEngineer::getName(){
    return this->name;
}
string PowerEngineer::getAlarm(){
    return this->alarmStatus;
}

void PowerEngineer::setAlarm(string changeTo){
    alarmStatus = changeTo;
    _networkElement->setAlarm(alarmStatus);
}
