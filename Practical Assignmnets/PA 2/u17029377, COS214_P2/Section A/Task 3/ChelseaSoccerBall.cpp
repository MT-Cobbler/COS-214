#include "ChelseaSoccerBall.h"

ChelseaSoccerBall::ChelseaSoccerBall(){
    cout << "ChelseaSoccerBall Constructor" << endl;
}
ChelseaSoccerBall::ChelseaSoccerBall(string i) : SoccerBall("Chelsea", 25.50 , i){

}
ChelseaSoccerBall::~ChelseaSoccerBall(){
    cout << "ChelseaSoccerBall Destructor" << endl;
}