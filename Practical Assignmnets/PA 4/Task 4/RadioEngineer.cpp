#include "RadioEngineer.h"

RadioEngineer::RadioEngineer(string na, NetworkElement* n){
    // cout << "CSCore engineer\n";
    _networkElement = n;
    name = na;
    status = "ready";
    // _networkElement->setAlarm("clear");
}

RadioEngineer::RadioEngineer(NMS *n){
    media = n;
}

RadioEngineer::~RadioEngineer(){
    delete _networkElement;
    delete media;
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

void RadioEngineer::statusChange(){
    media->notify(new RadioEngineer("Steve",_networkElement));
}
string RadioEngineer::getStatus(){
    return status;
}
void RadioEngineer::setStatus(string s){
    status = s;
    statusChange();
}