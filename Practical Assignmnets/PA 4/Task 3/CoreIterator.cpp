#include "CoreIterator.h"

CoreIterator::CoreIterator(ListOfCore* v){
    list<Engineer*>::iterator it = v->_list.begin();
    for( ; it != v->_list.end(); ++it){
        itList.push_back(*it);
    }
    list<Engineer*>::iterator it = itList.begin();
    firstEngineer = currentEngineer = *it;
}
CoreIterator::~CoreIterator(){
   delete firstEngineer; delete currentEngineer;
}
Engineer *CoreIterator::first(){
    return firstEngineer;
}
Engineer *CoreIterator::next(){
    // check if current has a next
    if(hasNext()){
        list<Engineer*>::iterator it = itList.begin();
        // iterate till you get to current then push it up by one
        for( ; it != itList.end(); ++it){
            if(*it == currentEngineer){
                ++it;
                currentEngineer = *it;
                return currentEngineer;
            }
        }
    }
    return NULL;
}
bool CoreIterator::hasNext(){
    list<Engineer*>::iterator it = itList.begin();
    // iterate till you get to current then push it up by one
    for( ; it != itList.end(); ++it){
        if(*it == currentEngineer){
            if(++(*it) != NULL){
                return true;
            }
            else{
                return false;
            }
        }
    }
}
Engineer *CoreIterator::current(){
    return currentEngineer;
}