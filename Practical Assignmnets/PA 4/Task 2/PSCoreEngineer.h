#ifndef PSCOREENGINEER_H
#define PSCOREENGINEER_H
#include <iostream>
#include "Engineer.h"
#include "NetworkElement.h"
using namespace std;

class PSCoreEngineer : public Engineer{
    public:
        PSCoreEngineer(string na, NetworkElement* n);
        ~PSCoreEngineer();
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