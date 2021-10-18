#include "PowerEngineer.h"

PowerEngineer::PowerEngineer(string na, NetworkElement* n){
    // cout << "CSCore engineer\n";
    _networkElement = n;
    name = na;
    status = "ready";
    // _networkElement->setAlarm("clear");
}

PowerEngineer::PowerEngineer(NMS *n){
    media = n;
}

PowerEngineer::~PowerEngineer(){
    delete _networkElement;
    delete media;
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

void PowerEngineer::statusChange(){
    media->notify(new PowerEngineer("Steve",_networkElement));
}
string PowerEngineer::getStatus(){
    return status;
}
void PowerEngineer::setStatus(string s){
    status = s;
    statusChange();
}