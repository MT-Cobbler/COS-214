#ifndef REDCARDSTATE_H
#define REDCARDSTATE_H
#include "CardState.h"
#include <iostream>
using namespace std;

class RedCardState : public CardState{
    public:
        RedCardState(); // initialise the card varible
        ~RedCardState();
        void handle(); //  print the current colour and the next card state
        CardState* changeCardState(); // return new state
};
#endif