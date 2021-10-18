#ifndef SECTION_H
#define SECTION_H
#include <iostream>
using namespace std;

class Section{
    public:
        Section();
        virtual ~Section();
        virtual void print() = 0;
        virtual void add(Section* ); // add a section to the current end of the track
        virtual void remove(); // remove last created section of track
};
#endif
