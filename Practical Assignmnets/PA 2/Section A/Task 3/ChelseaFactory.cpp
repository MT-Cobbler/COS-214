#include "ChelseaFactory.h"


ChalseaFactory::ChalseaFactory(){
    // cout << "ChalseaFactory Constructor" << endl;
}
ChalseaFactory::~ChalseaFactory(){
    // cout << "ChalseaFactory Destructor" << endl;
}
SoccerBall *ChalseaFactory::createSoccerBall(string n){
    return new ChelseaSoccerBall(n);
}

Shirt *ChalseaFactory::createShirt(string n){
    return new ChelseaShirt(n);
}   