#include "Turn.h"

Turn::Turn(){}

Turn::Turn(int n){
    this->rotation = n;
}

Turn::~Turn(){}
void Turn::print(){
    if(this->rotation == 0){
        cout << "Left Turn" << endl;
    }
    if(this->rotation == 180){
        cout << "Right Turn" << endl;
    }
}