#include "SoccerPlayer.h"
#include "CardState.h"

#include <iostream>
using namespace std;

int main(){
    SoccerPlayer* newS = new SoccerPlayer();
    cout << "Player, " << newS->getName() << " joined the field! " << endl;
    newS->commitFoul(); // no card
    newS->commitFoul(); // yellow card
    newS->commitFoul(); // red card

    newS = new SoccerPlayer("Adam");
     cout << "Player, " << newS->getName() << " joined the field! " << endl;
    newS->commitFoul(); // no card
    newS->commitFoul(); // yellow card
    newS->commitFoul(); // red card
    return 0;
}