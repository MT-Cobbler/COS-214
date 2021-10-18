#include "Section.h"
#include "Track.h"
#include "Straight.h"
#include "Chicane.h"
#include "Turn.h"
#include <iostream>

using namespace std;

int main(){
    // sections
    Section** sections = new Section*[3];
    sections[0] = new Straight();
    sections[1] = new Chicane();
    sections[2] = new Turn(0);

    // create track
    int choice = 0;
    Track* newTrack = new Track();
    for(int i = 0 ; i < 10; i++){
        cout << "Select a section: 1=Straight, 2=Chicane, 3=Turn\t"; cin >> choice;
        if(choice == 3){
            int degree = 0;
            cout << "Turn: Left = 1, Right = 2\t"; cin >> degree;
            if(degree == 1){
                newTrack->add(new Turn(0));
            }
            else if(degree == 2){
                newTrack->add(new Turn(180));
            }
        }
        else{
            newTrack->add(sections[choice - 1]);
        }
    }
    cout << endl; cout << "Constructing track..." << endl;
    newTrack->print();
    return 0;
}