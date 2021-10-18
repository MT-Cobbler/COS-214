#ifndef BSC_H
#define BSC_H
#include "NetworkElement.h"
#include <iostream>
using namespace std;
class BSC : public NetworkElement{
    private:
        string name; // BSC01
        string alarmState; // critical, major, minor, clear
    public:
        BSC(string n);
        ~BSC();
        string getAlarm();
        void setAlarm(string a);
        string getName();
};
#endif