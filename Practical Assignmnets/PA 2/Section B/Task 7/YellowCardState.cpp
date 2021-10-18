#include "YellowCardState.h"

YellowCardState::YellowCardState(){
    this->cardColour = "yellow";
    this->isOnField = true;
}

void YellowCardState::handle(){
    cout << "The player has already received a yellow card, and will now be given a red card." << endl ;
}

CardState* YellowCardState::changeCardState(){
    CardState* newCard = new RedCardState();
    this->isOnField = true;
    return newCard;
}
YellowCardState::~YellowCardState(){}