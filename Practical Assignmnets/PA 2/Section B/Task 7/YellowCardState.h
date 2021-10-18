#ifndef YELLOWCARDSTATE_H
#define YELLOWCARDSTATE_H
#include "CardState.h"
#include "RedCardState.h"

#include <iostream>
using namespace std;

class YellowCardState : public CardState{
    public:
        YellowCardState(); // initialise the card varible
        ~YellowCardState();
        void handle(); //  print the current colour and the next card state
        CardState* changeCardState(); // return new state

};
#endif