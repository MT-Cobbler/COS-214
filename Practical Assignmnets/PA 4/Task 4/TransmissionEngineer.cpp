#include "TransmissionEngineer.h"

TransmissionEngineer::TransmissionEngineer(string na, NetworkElement* n){
    // cout << "CSCore engineer\n";
    _networkElement = n;
    name = na;
    status = "ready";
    // _networkElement->setAlarm("clear");
}

TransmissionEngineer::TransmissionEngineer(NMS *n){
    media = n;
}

TransmissionEngineer::~TransmissionEngineer(){
    delete _networkElement;
    delete media;
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

void TransmissionEngineer::statusChange(){
    media->notify();
}
string TransmissionEngineer::getStatus(){
    return status;
}
void TransmissionEngineer::setStatus(string s){
    status = s;
    statusChange();
}