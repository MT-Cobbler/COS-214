#include "SoldierStore.h"
void SoldierStore::store(SoldierMomento *mM){
    _sMomento = mM;
}
SoldierMomento *SoldierStore::getMomento(){
    return _sMomento;
}
SoldierStore::~SoldierStore(){
    _sMomento = NULL;
    delete _sMomento;
}
