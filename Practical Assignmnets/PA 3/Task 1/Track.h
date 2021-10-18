#ifndef TRACK_H
#define TRACK_H
#include "Section.h"
#include <iostream>
#include <vector>

using namespace std;

class Track : public Section{
    // composite participant
    private:
        vector<Section*> sections;
        
    public:
        Track();
        ~Track();
        void print();
        void add(Section *);
        void remove();
};
#endif

