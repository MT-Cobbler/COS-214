#ifndef FLAGOBSERVER_H
#define FLAGOBSERVER_H

#include <iostream>
using namespace std;

#include "Track.h"
#include "Observer.h"
class FlagObserver : public Observer
{
    private:
        Track* raceTrack;
        bool waving; // signal state of observer
    public:
        FlagObserver(Track* );
        ~FlagObserver();
        void update();
        void print();
};
#endif

