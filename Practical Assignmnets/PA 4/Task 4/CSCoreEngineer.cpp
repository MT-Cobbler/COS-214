#include "CSCoreEngineer.h"

CSCoreEngineer::CSCoreEngineer(string na, NetworkElement* n){
    // cout << "CSCore engineer\n";
    _networkElement = n;
    name = na;
    status = "ready";
    // _networkElement->setAlarm("clear");
}

CSCoreEngineer::CSCoreEngineer(NMS *n){
    media = n;
}

CSCoreEngineer::~CSCoreEngineer(){
    delete _networkElement;
    delete media;
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

void CSCoreEngineer::statusChange(){
    media->notify(new CSCoreEngineer("Steve",_networkElement));
}
string CSCoreEngineer::getStatus(){
    return status;
}
void CSCoreEngineer::setStatus(string s){
    status = s;
    statusChange();
}