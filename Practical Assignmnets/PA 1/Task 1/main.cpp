#include <iostream>
// #include "Sniper.h"
// #include "Berserker.h"
#include "Medic.h"
// #include "Engineer.h"
using namespace std;

int main(){
    // create a new zombie
    Zombie* z1 = new Zombie("fire", 10);
    // create sniper
    // Soldier* s1 = new Sniper("James");
    Soldier* s2 = new Medic("Steven");
    // Soldier* s3 = new Berserker("Kevin");
    // Soldier* s4 = new Engineer("Ruben");
    cout << "---------------------------------------" << endl;
    cout << "---------------------------------------" << endl;
    Zombie* z2 = new Zombie("water", 17);
    s2->attack(z2);
    
    return 0;
}

