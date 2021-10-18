#include "ZombieStore.h"
void ZombieStore::store(ZombieMomento *zM){
    _zMomento = zM;
}
ZombieMomento* ZombieStore::getMomento(){
    return _zMomento;
}
ZombieStore::~ZombieStore(){
    _zMomento = NULL;
    delete _zMomento;
}