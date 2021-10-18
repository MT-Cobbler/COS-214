#include "Startline.h"

Startline::Startline(){}
Startline::~Startline(){}

void Startline::print(){
    Decorator::print();
    cout << "Starting line";
}