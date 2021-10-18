#include "LiverpoolSoccerBall.h"

LiverpoolSoccerBall::LiverpoolSoccerBall(){
    cout << "LiverpoolSoccerBall Constructor" << endl;
}
LiverpoolSoccerBall::LiverpoolSoccerBall(string i) : SoccerBall("Liverpool", 25.50 , i){

}
LiverpoolSoccerBall::~LiverpoolSoccerBall(){
    cout << "LiverpoolSoccerBall Destructor" << endl;
}