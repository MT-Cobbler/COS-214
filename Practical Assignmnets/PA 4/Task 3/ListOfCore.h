#ifndef LISTOFCORE_H
#define LISTOFCORE_H

#include "EngineerCollection.h"

#include "CoreIterator.h"
#include <list>

using namespace std;
class ListOfCore : public EngineerCollection{
    friend class CoreIterator;
    private:
        list<Engineer*> _list;
    public:
        ListOfCore();
        ~ListOfCore();
        EngineerIterator* createEngineerIterator();
        void addEngineer(Engineer* e);
        void removeEngineer();
        bool isEmpty();
    protected:
        Engineer* startingPoint;
};
#endif