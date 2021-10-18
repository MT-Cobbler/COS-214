#include "OperationsIterator.h"

OperationsIterator::OperationsIterator(VectorOfOperations* v){
    if(v->list.size() > 0){
        currentPos = 0;
        vector<Engineer*>::iterator it = v->list.begin();
        for( ; it != v->list.end(); ++it){
            itList.push_back( (*it) );
        }
    }
    else{
        currentPos = -1;
    }
}
OperationsIterator::~OperationsIterator(){
    if(itList.size() > 0){
        vector<Engineer*>::iterator it = itList.begin();
        for( ; it != itList.end(); ++it){
            delete *it;
        }
    }
}
Engineer *OperationsIterator::first(){
    vector<Engineer*>::iterator it = itList.begin();
    return *it;
}
Engineer *OperationsIterator::next(){
    // check if current has a next
    if(hasNext()){
        vector<Engineer*>::iterator it = itList.begin();
        for(int i = 0 ; i <= itList.size(); i++){
            if(i == (currentPos + 1)){
                ++it;
                return (*it);
            }
            ++it;
        }
    }
    return NULL;
}
bool OperationsIterator::hasNext(){
    if(current() != NULL && (currentPos + 1) < itList.size()){
        return true;
    }
    return false;
}
Engineer *OperationsIterator::current(){
    // iterate till currentPos + 1
    if(currentPos > -1){
        vector<Engineer*>::iterator it = itList.begin();
        for(int i = 0 ; i <= itList.size(); i++){
            if(i == currentPos){
                return (*it);
            }
            ++it;
        }
    }
}