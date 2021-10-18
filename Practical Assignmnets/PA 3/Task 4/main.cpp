#include "Section.h"
#include "Track.h"
#include "Straight.h"
#include "Chicane.h"
#include "Turn.h"
#include "Decorator.h"
#include "Barrier.h"
#include "GravelTrap.h"
#include "Pitstop.h"
#include "Startline.h"
#include "Observer.h"
#include "FlagObserver.h"

#include <iostream>

using namespace std;


static void makeTrack(Track &c){

    Section* straight = new Straight();
    Decorator* dec = new Startline();

    dec->add(straight);
    c.add(dec);

    dec = new Barrier();
    dec->add(new Turn(180));
    c.add(dec);

    c.add(new Straight());
    c.add(new Straight());

    dec = new GravelTrap();
    dec->add(new Turn(180));
    c.add(dec);

    dec = new Barrier();
    dec->add(new Chicane());
    c.add(dec);

    dec->add(new Turn(180));
    c.add(dec);

    dec = new Pitstop();
    dec->add(new Straight());
    c.add(dec);

    c.add(new Straight());

    dec = new GravelTrap();
    dec->add(new Turn(180));
    c.add(dec);
}

int main(){
    // create the track
    Track* track = new Track();
    makeTrack(*track);
    // staright starting line

    cout << "Welcome to the track." << endl;
    cout << "Track layout:" << endl;

    // print track
    track->print();

    // there has been a crash
    Observer* flaggers = new FlagObserver(track);

    cout << "There has been a crash!" << endl;
    track->setCrash(true);
    flaggers->update();
    flaggers->print();

    cout << "Crash has been taken care of" << endl;
    track->setCrash(false);
    flaggers->update();
    flaggers->print();
    return 0;
}

