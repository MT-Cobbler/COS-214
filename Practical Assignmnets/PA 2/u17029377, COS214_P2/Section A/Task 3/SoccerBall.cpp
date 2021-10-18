#include "SoccerBall.h"

SoccerBall::SoccerBall(){
    cout << "SoccerBall Constructor" << endl;
}

SoccerBall::SoccerBall(string c, double p, string i) : Merchandise(c, p, "Ball"){
    if(i == "N" || i == "n"){
        this->inflated = false;
    }
    else if(i == "Y" || i == "y"){
        this->inflated = true;
    }
}

SoccerBall::~SoccerBall(){
    cout << "SoccerBall Destructor" << endl;
}

string SoccerBall::getDescription(){
    string d = Merchandise::getDescription();
    if(this->inflated){
        d += "inflated: True";
    }else{
        d += "inflated: False";
    }
    
    return d;
}