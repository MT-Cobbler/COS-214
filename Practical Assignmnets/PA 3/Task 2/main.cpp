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

#include <iostream>

using namespace std;

int main(){

// task 2 //
    // decoartions
    Track* track = new Track();

    // staright starting line
    Section* straight = new Straight();
    Decorator* dec = new Startline();

    dec->add(straight);
    track->add(dec);

    dec = new Barrier();
    dec->add(new Turn(180));
    track->add(dec);

    track->add(new Straight());
    track->add(new Straight());

    dec = new GravelTrap();
    dec->add(new Turn(180));
    track->add(dec);

    dec = new Barrier();
    dec->add(new Chicane());
    track->add(dec);

    dec->add(new Turn(180));
    track->add(dec);

    dec = new Pitstop();
    dec->add(new Straight());
    track->add(dec);

    track->add(new Straight());

    dec = new GravelTrap();
    dec->add(new Turn(180));
    track->add(dec);

    track->print();
    return 0;
}