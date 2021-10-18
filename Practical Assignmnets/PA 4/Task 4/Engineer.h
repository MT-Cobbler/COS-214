#ifndef ENGINEER_H
#define ENGINEER_H
#include <iostream>
#include "NMS.h"
using namespace std;
class Engineer {
    public:
        Engineer();
        Engineer(NMS* n);
        virtual ~Engineer();
        virtual void update() = 0;
        virtual string getName() = 0;
        virtual string getAlarm() = 0;
        virtual void setAlarm(string a) = 0;


        virtual string getStatus() = 0;
        virtual void setStatus(string s) = 0;
        
        virtual void statusChange();
    private:
};
#endif