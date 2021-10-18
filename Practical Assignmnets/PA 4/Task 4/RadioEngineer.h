#ifndef RADIOENGINEER_H
#define RADIOENGINEER_H
#include <iostream>
#include "Engineer.h"
#include "NetworkElement.h"
using namespace std;

class RadioEngineer : public Engineer{
    public:
        RadioEngineer(string na, NetworkElement* n);
        RadioEngineer(NMS* n);
        ~RadioEngineer();
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