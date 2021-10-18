#ifndef NOCARDSTATE_H
#define NOCARDSTATE_H
#include "CardState.h"
#include "YellowCardState.h"
#include <iostream>
using namespace std;

class NoCardState : public CardState{
    public:
        NoCardState(); // initialise the card varible
        ~NoCardState();
        void handle(); //  print the current colour and the next card state
        CardState* changeCardState(); // return new state
};
#endif