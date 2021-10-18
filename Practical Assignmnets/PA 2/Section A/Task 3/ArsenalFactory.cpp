#include "ArsenalFactory.h"

ArsenalFactory::ArsenalFactory(){
    // cout << "ArsenalFactory Constructor" << endl;
}
ArsenalFactory::~ArsenalFactory(){
    // cout << "ArsenalFactory Destructor" << endl;
}
SoccerBall *ArsenalFactory::createSoccerBall(string n){
    return new ArsenalSoccerBall(n);
}

Shirt *ArsenalFactory::createShirt(string n){
    return new ArsenalShirt(n);
}


