#include "Track.h"

Track::Track(){
    // cout << "Racetrack created" << endl;
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
    cout << "\t--------\t------------------" << endl;
    for(it = sections.begin(); it != sections.end(); ++it){
        cout << "\t"; (*it)->print();
    }
}

void Track::add(Section *sec){
    this->sections.push_back(sec);
}

void Track::remove(){
    this->sections.pop_back();
}