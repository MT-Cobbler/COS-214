#include "LiverpoolFactory.h"

LiverpoolFactory::LiverpoolFactory(){
    // cout << "LiverpoolFactory Constructor" << endl;
}
LiverpoolFactory::~LiverpoolFactory(){
    // cout << "LiverpoolFactory Destructor" << endl;
}
SoccerBall *LiverpoolFactory::createSoccerBall(string n){
    return new LiverpoolSoccerBall(n);
}

Shirt *LiverpoolFactory::createShirt(string n){
    return new LiverpoolShirt(n);
}


