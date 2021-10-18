#ifndef RADIOENGINEER_H
#define RADIOENGINEER_H
#include <iostream>
#include "Engineer.h"
#include "NetworkElement.h"
using namespace std;

class RadioEngineer : public Engineer{
    public:
        RadioEngineer(string na, NetworkElement* n);
        ~RadioEngineer();
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