#ifndef NETWORKELEMENT_H
#define NETWORKELEMENT_H
#include <list>

#include "Engineer.h"
using namespace std;

class NetworkElement{ // Subject
    public:
        NetworkElement();
        virtual ~NetworkElement();
        void attach(Engineer* e);
        void detach(Engineer* e);
        void notify();
        void engFix(Engineer* e,string changeTo);
        virtual string getAlarm() = 0;
        virtual void setAlarm(string a) = 0;
        virtual string getName() = 0;

    private:
        list<Engineer*> engineers;
};
#endif