#include "FlagObserver.h"

FlagObserver::FlagObserver(Track *t){
    raceTrack = t;
    raceTrack->setCrash(false);
}

void FlagObserver::update(){
    waving = raceTrack->hasCrash();
}

void FlagObserver::print(){
    string known = (waving == false) ? "Not waving" : "Is waving";
    cout << known << endl;
}