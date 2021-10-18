#include "Track.h"

Track::Track(){
    // cout << "Racetrack created" << endl;
    crash = false;
}

Track::~Track(){
    vector<Section*>::iterator it;
    for(it = sections.begin(); it != sections.end(); ++it){
        delete *it;
    }
}

void Track::print(){
    vector<Section*>::iterator it;
    cout << "\tSection \t Added decorations" << endl; 
    cout << "\t--------\t------------------";
    for(it = sections.begin(); it != sections.end(); ++it){
        cout << "\t"; (*it)->print();
    }
    cout << endl;
}

void Track::add(Section *sec){
    this->sections.push_back(sec);
}

void Track::remove(){
    this->sections.pop_back();
}

bool Track::hasCrash(){
    return crash;
}
void Track::setCrash(bool c){
    crash = c;
}