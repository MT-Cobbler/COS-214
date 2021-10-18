#ifndef TRANSMISSIONENGINEER_H
#define TRANSMISSIONENGINEER_H
#include <iostream>
#include "Engineer.h"
#include "NetworkElement.h"
using namespace std;

class TransmissionEngineer : public Engineer{
    public:
        TransmissionEngineer(string na, NetworkElement* n);
        ~TransmissionEngineer();
        void update();
        string getName();
        string getAlarm();
        void setAlarm(string a);
    private:
        string name;
        string alarmStatus;
        NetworkElement* _networkElement;
};
#endif