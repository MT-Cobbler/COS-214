#ifndef ENGINEERITERATOR_H
#define ENGINEERITERATOR_H

#include "Engineer.h"

class EngineerIterator{
    public: 
        EngineerIterator();
        virtual ~EngineerIterator();
        virtual Engineer* first();
        virtual Engineer* next();
        virtual bool hasNext();
        virtual Engineer* current();
    private: 
};
#endif
