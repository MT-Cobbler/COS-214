#ifndef ENGINEER_H
#define ENGINEER_H
#include <iostream>

using namespace std;
class Engineer{
    public:
        Engineer();
        virtual ~Engineer();
        virtual void update() = 0;
        virtual string getName() = 0;
        virtual string getAlarm() = 0;
        virtual void setAlarm(string a) = 0;
};
#endif