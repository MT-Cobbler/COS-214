#ifndef PSCOREENGINEER_H
#define PSCOREENGINEER_H
#include <iostream>
#include "Engineer.h"
#include "NetworkElement.h"
using namespace std;

class PSCoreEngineer : public Engineer{
    public:
        PSCoreEngineer(string na, NetworkElement* n);
        PSCoreEngineer(NMS* n);
        ~PSCoreEngineer();
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