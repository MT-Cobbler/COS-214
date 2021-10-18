#ifndef TURN_H
#define TURN_H

#include "Section.h"

class Turn : public Section{
    private:
        int rotation;
    public:
        Turn();
        Turn(int r);
        ~Turn();
        void print();
};
#endif

