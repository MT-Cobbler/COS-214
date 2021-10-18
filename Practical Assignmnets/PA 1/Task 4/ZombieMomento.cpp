#include "ZombieMomento.h"
ZombieMomento::ZombieMomento(string att, int h,  int d){
    _state = new ZombieState(att, h, d);
}
ZombieMomento::~ZombieMomento(){
    delete _state;
}
void ZombieMomento::setState(ZombieState *s){
    _state = s;
}
ZombieState *ZombieMomento::getState(){
    return _state;
}