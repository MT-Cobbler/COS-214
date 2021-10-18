#include "Turn.h"

Turn::Turn(){}

Turn::Turn(int n){
    this->rotation = n;
}

Turn::~Turn(){}
void Turn::print(){
     cout << endl;
    if(this->rotation == 0){
        cout << "\tLeft Turn \t";
    }
    if(this->rotation == 180){
        cout << "\tRight Turn \t";
    }
}