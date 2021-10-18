#include "SoccerBall.h"

SoccerBall::SoccerBall(){
    cout << "SoccerBall Constructor" << endl;
}

SoccerBall::SoccerBall(string c, double p, string i) : Merchandise(c, p, "Ball"){
    if(i == "N" || i == "n"){
        this->inflate = false;
    }
    else if(i == "Y" || i == "y"){
        this->inflate = true;
    }
}

SoccerBall::~SoccerBall(){
    cout << "SoccerBall Destructor" << endl;
}

string SoccerBall::getDescription(){
    string d = Merchandise::getDescription();
    if(this->inflate){
        d += "Inflated: True";
    }else{
        d += "Inflated: False";
    }
    
    return d;
}