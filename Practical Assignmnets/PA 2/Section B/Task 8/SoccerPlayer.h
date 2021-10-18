#ifndef SOCCERPLAYER_H
#define SOCCERPLAYER_H
#include "CardState.h"
#include "NoCardState.h"
#include "YellowCardState.h"
#include "RedCardState.h"

#include "PlayStyle.h"
#include <iostream>
using namespace std;

class SoccerPlayer{
    private:
        string name;
        CardState* card_;
        PlayStyle* style;
    public:
        SoccerPlayer();
        SoccerPlayer(string n);
        ~SoccerPlayer();
        void commitFoul(); // change the card state
        string getName();
        // strategy
        SoccerPlayer(string n, PlayStyle* s);
        virtual void play();
        void setPlayStyle(PlayStyle* s);
        PlayStyle* getStyle();
        CardState* getCardState();
};
#endif
