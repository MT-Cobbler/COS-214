#include "CardState.h"

CardState::CardState(){}

string CardState::getCardColour(){
    return this->cardColour;
}
CardState::~CardState(){}

bool CardState::isOn(){
    return this->isOnField;
}