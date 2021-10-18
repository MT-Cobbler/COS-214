#include "RedCardState.h"

RedCardState::RedCardState(){
    this->cardColour = "red";
    this->isOnField = true;
}

void RedCardState::handle(){
    cout << "The player has already been sent off with a red card." << endl ;
}

CardState* RedCardState::changeCardState(){
    this->isOnField = false;
    return NULL;
}
RedCardState::~RedCardState(){}