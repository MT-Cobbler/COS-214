#ifndef DECORATOR_H
#define DECORATOR_H

#include "Section.h"

class Decorator : public Section{
    private:
        Section* section;
    public:
        Decorator();
        virtual ~Decorator();
        void print();
        void add(Section* s);
        void remove();
};
#endif

