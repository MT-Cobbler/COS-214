#include "PSCoreEngineer.h"

PSCoreEngineer::PSCoreEngineer(string na, NetworkElement* n){
    // cout << "CSCore engineer\n";
    _networkElement = n;
    name = na;
    status = "ready";
    // _networkElement->setAlarm("clear");
}

PSCoreEngineer::PSCoreEngineer(NMS *n){
    media = n;
}

PSCoreEngineer::~PSCoreEngineer(){
    delete _networkElement;
    delete media;
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

void PSCoreEngineer::statusChange(){
    media->notify(new PSCoreEngineer("Steve",_networkElement));
}
string PSCoreEngineer::getStatus(){
    return status;
}
void PSCoreEngineer::setStatus(string s){
    status = s;
    statusChange();
}