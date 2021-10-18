#ifndef ENGINEERCOLLECTION_H
#define ENGINEERCOLLECTION_H
#include "EngineerIterator.h"
#include "Engineer.h"
//aggregate
class EngineerCollection{
    public:
        virtual EngineerIterator* createEngineerIterator();
        virtual void addEngineer(Engineer* e);
        virtual void removeEngineer();
        virtual bool isEmpty();
    private:
};
#endif