#ifndef GGSN_H
#define GGSN_H
#include "NetworkElement.h"
#include <iostream>
using namespace std;
class GGSN : public NetworkElement{
    private:
        string name; // GGSN01
        string alarmState; // critical, major, minor, clear
    public:
        GGSN(string n);
        ~GGSN();
        string getAlarm();
        void setAlarm(string a);
        string getName();
};
#endif