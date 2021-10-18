#include "FlagObserver.h"

FlagObserver::FlagObserver(Track *t){
    raceTrack = t;
    raceTrack->setCrash(false);
}
FlagObserver::~FlagObserver(){
    delete raceTrack;
}
void FlagObserver::update(){
    waving = raceTrack->hasCrash();
}

void FlagObserver::print(){
    string known = (waving == true) ? "Flags up! Race on hold..." : "Flags down! Race continues...";
    cout << known << endl;
}