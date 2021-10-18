#include "ArsenalSoccerBall.h"

ArsenalSoccerBall::ArsenalSoccerBall(){
    cout << "ArsenalSoccerBall Constructor" << endl;
}
ArsenalSoccerBall::ArsenalSoccerBall(string i) : SoccerBall("Arsenal", 25.50 , i){

}
ArsenalSoccerBall::~ArsenalSoccerBall(){
    cout << "ArsenalSoccerBall Destructor" << endl;
}