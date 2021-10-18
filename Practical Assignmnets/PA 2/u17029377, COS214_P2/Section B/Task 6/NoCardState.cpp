#include "NoCardState.h"

NoCardState::NoCardState(){
    this->cardColour = "none";
}

void NoCardState::handle(){
    cout << "The player hasn't commited any previous fouls, and will now be given a yellow card." << endl ;
}

CardState* NoCardState::changeCardState(){
    CardState* newCard = new YellowCardState();
    return newCard;
}
NoCardState::~NoCardState(){}