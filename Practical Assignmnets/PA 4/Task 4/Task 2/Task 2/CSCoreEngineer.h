#ifndef CSCOREENGINEER_H
#define CSCOREENGINEER_H
#include <iostream>
#include "Engineer.h"
#include "NetworkElement.h"
using namespace std;

class CSCoreEngineer : public Engineer{
    public:
        CSCoreEngineer(string na, NetworkElement* n);
        ~CSCoreEngineer();
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