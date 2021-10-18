#ifndef CSCOREENGINEER_H
#define CSCOREENGINEER_H
#include <iostream>
#include "Engineer.h"
#include "NetworkElement.h"
using namespace std;

class CSCoreEngineer : public Engineer{
    public:
        CSCoreEngineer(NMS* n);
        CSCoreEngineer(string na, NetworkElement* n);
        ~CSCoreEngineer();
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