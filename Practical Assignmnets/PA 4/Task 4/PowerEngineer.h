#ifndef POWERENGINEER_H
#define POWERENGINEER_H
#include <iostream>
#include "Engineer.h"
#include "NetworkElement.h"
using namespace std;

class PowerEngineer : public Engineer{
    public:
        PowerEngineer(string na, NetworkElement* n);
        PowerEngineer(NMS* n);
        ~PowerEngineer();
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