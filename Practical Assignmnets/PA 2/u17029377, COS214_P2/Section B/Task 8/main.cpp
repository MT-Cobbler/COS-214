#include "SoccerPlayer.h"
#include "CardState.h"
#include "PlayStyle.h"
#include "AttackPlayStyle.h"
#include "DefendPlayStyle.h"
#include "PossesionPlayStyle.h"
#include <iostream>

using namespace std;

int main(){
    // PlayStyle* att = new AttackPlayStyle();
    // SoccerPlayer* oak = new  SoccerPlayer("James", att);
    // create team

    string playerName; 
    string positions[] = {"Attacker", "Defender", "Midfielder"};
    PlayStyle** styles = new PlayStyle*[3];
    styles[0] = new AttackPlayStyle(); 
    styles[1] = new DefendPlayStyle(); 
    styles[2] = new PossesionPlayStyle(); 
    
    SoccerPlayer** teamOne = new SoccerPlayer*[3];
    SoccerPlayer** teamTwo = new SoccerPlayer*[3];

    cout << "-------------------------------------------------------------" << endl;
    cout << endl;
    cout << "Team One's roster:" << endl;
    for(int i = 0 ; i < 3; i++){
        cout << "Name of your " << positions[i] << " : ";
        cin >> playerName;
        teamOne[i] = new SoccerPlayer(playerName, styles[i]);
    }
    cout << endl;
    cout << "Team Two's roster:" << endl;
    for(int i = 0 ; i < 3; i++){
        cout << "Name of your " << positions[i] << " : ";
        cin >> playerName;
        teamTwo[i] = new SoccerPlayer(playerName, styles[i]);
    }
    cout << endl;
    // cout << "Name of you attacker: "; cin >> playerName; 
    // teamOne[0] = new SoccerPlayer(playerName, new AttackPlayStyle());
    // cout << "Name of you midfielder: "; cin >> playerName; 
    // teamOne[1] = new SoccerPlayer(playerName, new PossesionPlayStyle());
    // cout << "Name of you defender: "; cin >> playerName; 
    // teamOne[2] = new SoccerPlayer(playerName, new DefendPlayStyle());
    
    // cout << endl;
    // cout << "Team Two's's roster:" << endl;
    // cout << "Name of you attacker: "; cin >> playerName; teamTwo[0] = new SoccerPlayer(playerName, new AttackPlayStyle());
    // cout << "Name of you midfielder: "; cin >> playerName; teamTwo[1] = new SoccerPlayer(playerName, new PossesionPlayStyle());
    // cout << "Name of you defender: "; cin >> playerName; teamTwo[2] = new SoccerPlayer(playerName, new DefendPlayStyle());

    cout << "Team 1 Roster: " << endl;
    for(int i = 0 ; i < 3; i++){
        cout << teamOne[i]->getName() << ": " << teamOne[i]->getStyle()->getStyle() << endl;
    }
    cout << endl;
    cout << "Team 2 Roster: " << endl;
    for(int i = 0 ; i < 3; i++){
        cout << teamOne[i]->getName() << ": " << teamOne[i]->getStyle()->getStyle() << endl;
    }
    int tOneGoal = 0 ; int TwoGoal = 0;
    cout << endl;
    cout << "Let the match begin!" << endl;
    cout << endl;
    while(tOneGoal < 3){
        cout << "The score is: " << tOneGoal << " to " << TwoGoal << endl;
        cout << "_____________________________________________________" << endl;
        teamOne[0]->play();
        teamTwo[1]->play();
        cout << endl;
        teamTwo[2]->play();
        teamTwo[0]->play();
        cout << endl;
        teamOne[1]->play();
        teamTwo[2]->commitFoul();
        cout << endl;
        teamOne[2]->play();
        teamOne[0]->play();
        cout << endl;
        teamOne[0]->getName();
        tOneGoal++;
        cout << endl;
    }

    cout << "Half Time" << endl;
    cout << "Second half commences!" << endl;
    cout << "Team Two has decided to have no more defensive players" << endl;
    teamTwo[1]->setPlayStyle(styles[2]);
    cout << "Roster update for team Two: "<< endl;
    for(int i = 0 ; i < 3; i++){
        cout << teamTwo[i]->getName() << ": " << teamOne[i]->getStyle()->getStyle() << endl;
    }
    cout << endl;
    cout << "The game continues" << endl;
    cout << endl;
    while(TwoGoal < 3){
        cout << "The score is: " << tOneGoal << " to " << TwoGoal << endl;
        cout << "_____________________________________________________" << endl;
        teamOne[0]->play();
        teamTwo[1]->play();
        cout << endl;
        teamTwo[2]->play();
        teamTwo[0]->play();
        cout << endl;
        teamOne[1]->play();
        cout << endl;
        teamOne[2]->play();
        teamOne[0]->play();
        cout << endl;
        teamOne[0]->getName();
        TwoGoal++;
        cout << endl;
    }
    cout << "Final score: " << tOneGoal << " to " << TwoGoal << endl;
    cout << teamTwo[1]->getName() << " will not be seeing the field after today's foul plays." << endl;

    return 0;
}