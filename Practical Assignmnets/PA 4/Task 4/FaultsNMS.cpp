#include "FaultsNMS.h"

FaultsNMS::FaultsNMS(){}
FaultsNMS::~FaultsNMS(){

}

void FaultsNMS::notify(Engineer* e){
    cout << e->getName() << " changed status to " << e->getStatus() << " ...notifying the others!" << endl;
    
}
Engineer* FaultsNMS::createEnigneer(){

}