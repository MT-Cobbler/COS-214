#ifndef SECTION_H
#define SECTION_H
#include <iostream>
#include "Observer.h"
#include <vector>
using namespace std;

class Section{
    private:
        vector<Observer*> observerList; //observer objects
    public:
        Section();
        virtual ~Section();
        virtual void print() = 0;
        virtual void add(Section* ); // add a section to the current end of the track
        virtual void remove(); // remove last created section of track
        void attach(Observer*);  // add observers to the observerList
        void detach(Observer* );  // remove observers from the observerList
        void notify();  // notify all observers in the observerList
};
#endif
