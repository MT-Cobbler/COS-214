#ifndef TRANSMISSIONENGINEER_H
#define TRANSMISSIONENGINEER_H
#include <iostream>
#include "Engineer.h"
#include "NetworkElement.h"
using namespace std;

class TransmissionEngineer : public Engineer{
    public:
        TransmissionEngineer(string na, NetworkElement* n);
        TransmissionEngineer(NMS* n);
        ~TransmissionEngineer();
        void update();
        string getName();
        string getAlarm();
        void statusChange();
        void setAlarm(string a);
        void setStatus(string s);
        string getStatus();
     private:
        string name;
        string alarmStatus;
        NetworkElement* _networkElement;
        string status;
        NMS* media;
};
#endif