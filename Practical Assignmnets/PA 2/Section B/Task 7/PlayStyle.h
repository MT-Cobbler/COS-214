#ifndef PLAYSTYLE_H
#define PLAYSTYLE_H

#include <iostream>
using namespace std;

class PlayStyle{
    public:
        PlayStyle();
        virtual ~PlayStyle();
        virtual string play() = 0;
};
#endif