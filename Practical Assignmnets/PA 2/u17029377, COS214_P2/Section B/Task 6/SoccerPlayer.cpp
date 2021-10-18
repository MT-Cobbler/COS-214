#include "SoccerPlayer.h"

SoccerPlayer::SoccerPlayer(){
    this->card_ = new NoCardState();
    this->name = "Doom";
}
SoccerPlayer::SoccerPlayer(std::string n){
    this->name = n;
    this->card_ = new NoCardState();
}
SoccerPlayer::~SoccerPlayer(){
    delete card_;
}
string SoccerPlayer::getName(){
    return this->name;
}
void SoccerPlayer::commitFoul(){
    card_->handle();
    if(card_->getCardColour() == "none"){
        this->card_ = card_->changeCardState(); 
    }
    else if(card_->getCardColour() == "yellow"){
        this->card_ = card_->changeCardState();
    }
    else if(card_->getCardColour() == "red"){
        this->card_ = card_->changeCardState();     
    }
}