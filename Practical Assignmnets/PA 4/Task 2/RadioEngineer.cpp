#include "RadioEngineer.h"

RadioEngineer::RadioEngineer(string na, NetworkElement* n){
     // cout << "CSCore engineer\n";
    _networkElement = n;
    name = na;
    // _networkElement->setAlarm("clear");
}

RadioEngineer::~RadioEngineer(){
    delete _networkElement;
}

void RadioEngineer::update(){
    alarmStatus = _networkElement->getAlarm();
}

string RadioEngineer::getName(){
    return this->name;
}
string RadioEngineer::getAlarm(){
    return this->alarmStatus;
}
void RadioEngineer::setAlarm(string changeTo){
    alarmStatus = changeTo;
    _networkElement->setAlarm(alarmStatus);
}