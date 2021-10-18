#ifndef COREITERATOR_H
#define COREITERATOR_H
#include <list>
#include "EngineerIterator.h"
#include "EngineerCollection.h"

class CoreIterator : public EngineerIterator{
    public:
        CoreIterator(EngineerCollection* v);
        ~CoreIterator();
        Engineer* first();
        Engineer* next();
        bool hasNext();
        Engineer* current();
    private:
        Engineer* firstEngineer;
        Engineer* currentEngineer;
        list<Engineer*> itList;
};
#endif