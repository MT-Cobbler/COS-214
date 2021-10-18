#include "Pitstop.h"

Pitstop::Pitstop(){}
Pitstop::~Pitstop(){}
void Pitstop::print(){
    Decorator::print();
    cout << "Pit stop";
}