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
    delete style;
}

SoccerPlayer::SoccerPlayer(string n, PlayStyle *s){
    this->name = n; this->style = s;
    this->card_ = new NoCardState();
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

void SoccerPlayer::play(){

    if(getCardState() != NULL){
        cout << getName() << " " << style->play() << endl;
    }else{
        cout << "The player cannot demonstrate their play-style, as they have been sent off.";
    }
}
void SoccerPlayer::setPlayStyle(PlayStyle *s){
    // delete style;
    style = s;
}

PlayStyle* SoccerPlayer::getStyle(){
    return this->style;
}
CardState *SoccerPlayer::getCardState(){
    return this->card_;
}