#include "SoldierMomento.h"
SoldierMomento::SoldierMomento(string n, int h, string p, int d){
    _state = new SoldierState(n, h, p, d);
}
SoldierMomento::~SoldierMomento(){
    delete _state;
}
void SoldierMomento::setState(SoldierState *s){
    _state = s;
}
SoldierState *SoldierMomento::getState(){
    return _state;
}
