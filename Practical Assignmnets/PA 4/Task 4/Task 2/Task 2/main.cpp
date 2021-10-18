#include "BTS.h"
#include "BSC.h"
#include "MSC.h"
#include "GGSN.h"

#include "RadioEngineer.h"
#include "PowerEngineer.h"
#include "TransmissionEngineer.h"
#include "CSCoreEngineer.h"
#include "PSCoreEngineer.h"

#include <iostream>

using namespace std;

int main(){

    string status[] = {"clear", "minor", "major", "critical"};
    NetworkElement** networks = new NetworkElement*[4];
    networks[0] = new BTS("BTS01");
    networks[1] = new BSC("BSC01");
    networks[2] = new MSC("MSC01");
    networks[3] = new GGSN("GGSN01");

    Engineer* newR = new RadioEngineer("Adam", networks[0]);
    Engineer* newP = new PowerEngineer("Jake", networks[0]);
    Engineer* newT = new TransmissionEngineer("Steve", networks[0]);
    Engineer* newCS = new CSCoreEngineer("Benny", networks[2]);
    Engineer* newCP = new CSCoreEngineer("Chris", networks[3]);

    Engineer** engineers = new Engineer*[5];
    engineers[0] = newR;
    engineers[1] = newP;
    engineers[2] = newT;
    engineers[3] = newCS;
    engineers[4] = newCP;

    // scenario
    for(int i = 0 ; i < 3; i++){
        networks[0]->attach(engineers[i]);
    }

    cout << networks[0]->getName() << " current status: " << networks[0]->getAlarm() << " will change to critical" << endl;
    networks[0]->setAlarm("critical");
    cout << networks[0]->getName() << " current status: " << networks[0]->getAlarm() << endl;
    
    networks[0]->notify();
    cout << "PowerEngineer is repairing" << endl;
    networks[0]->engFix(engineers[2], "clear");     // tells which engineer in the list of engineers for BSC to fix it
    cout << "Repair successful" << endl;
    cout << networks[0]->getName() << " current status: " << networks[0]->getAlarm() << endl;

    networks[0]->notify();
    return 0;
}
