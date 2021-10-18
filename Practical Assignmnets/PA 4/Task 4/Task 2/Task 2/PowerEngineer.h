#ifndef POWERENGINEER_H
#define POWERENGINEER_H
#include <iostream>
#include "Engineer.h"
#include "NetworkElement.h"
using namespace std;

class PowerEngineer : public Engineer{
    public:
        PowerEngineer(string na, NetworkElement* n);
        ~PowerEngineer();
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