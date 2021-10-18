#ifndef MSC_H
#define MSC_H
#include "NetworkElement.h"
#include <iostream>
using namespace std;
class MSC : public NetworkElement{
    private:
        string name; // MSC01
        string alarmState; // critical, major, minor, clear
    public:
        MSC(string n);
        ~MSC();
        string getAlarm();
        void setAlarm(string a);
        string getName();
};
#endif