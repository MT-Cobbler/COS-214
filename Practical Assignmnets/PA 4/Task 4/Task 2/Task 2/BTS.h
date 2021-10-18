#ifndef BTS_H
#define BTS_H
#include "NetworkElement.h"
#include <iostream>
using namespace std;
class BTS : public NetworkElement{
    private:
        string name; // BTS01
        string alarmState; // critical, major, minor, clear
    public:
        BTS(string n);
        ~BTS();
        string getAlarm();
        void setAlarm(string a);
        string getName();
};
#endif