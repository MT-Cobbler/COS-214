#ifndef VECTOROFOPERATIONS_H
#define VECTOROFOPERATIONS_H

#include "EngineerCollection.h"
#include <vector>

using namespace std;
class VectorOfOperations : public EngineerCollection{
    friend class OperationsIterator;
    private:
        vector<Engineer*> list;
    public:
        VectorOfOperations();
        ~VectorOfOperations();
        EngineerIterator* createEngineerIterator();
        void addEngineer(Engineer* e);
        void removeEngineer();
        bool isEmpty();
};
#endif