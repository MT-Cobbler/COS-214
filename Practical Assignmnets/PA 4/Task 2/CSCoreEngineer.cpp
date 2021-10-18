#include "CSCoreEngineer.h"

CSCoreEngineer::CSCoreEngineer(string na, NetworkElement* n){
    // cout << "CSCore engineer\n";
    _networkElement = n;
    name = na;
    // _networkElement->setAlarm("clear");
}

CSCoreEngineer::~CSCoreEngineer(){
    delete _networkElement;
}

void CSCoreEngineer::update(){
    alarmStatus = _networkElement->getAlarm();
}

string CSCoreEngineer::getName(){
    return this->name;
}
string CSCoreEngineer::getAlarm(){
    return this->alarmStatus;
}

void CSCoreEngineer::setAlarm(string changeTo){
    alarmStatus = changeTo;
    _networkElement->setAlarm(alarmStatus);
}
