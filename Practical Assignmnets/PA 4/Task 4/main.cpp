#include "BSC.h"
#include "RadioEngineer.h"
#include "PowerEngineer.h"
#include "TransmissionEngineer.h"
#include "CSCoreEngineer.h"
#include "PSCoreEngineer.h"
#include "FaultsNMS.h"

#include <iostream>

using namespace std;

int main(){
    NetworkElement* n = new BSC("BSC01");
    Engineer* e = new RadioEngineer("Jake", n);
    NMS* nms = new FaultsNMS();
    return 0;
}