#ifndef OPERATIONSITERATOR_H
#define OPERATIONSITERATOR_H
#include <vector>
#include "EngineerIterator.h"
#include "EngineerCollection.h"

class OperationsIterator : public EngineerIterator{
    public:
        OperationsIterator(EngineerCollection* v);
        ~OperationsIterator();
        Engineer* first();
        Engineer* next();
        bool hasNext();
        Engineer* current();
    private:
        int currentPos;
        vector<Engineer*> itList;
};
#endif