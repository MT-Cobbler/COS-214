#include "Soldier.h"
#include "Zombie.h"
#include "SniperFactory.h"
#include "BerserkerFactory.h"
#include "MedicFactory.h"
#include "EngineerFactory.h"
#include <iostream>
#include "SoldierMomento.h"
#include "SoldierState.h"
#include "SoldierStore.h"
#include "ZombieMomento.h"
#include "ZombieState.h"
#include "ZombieStore.h"
using namespace std;

int main()
{
	// task 4 //
	SoldierStore soldierStore;
	ZombieStore zombieStore;
	Zombie** zombies = new Zombie*[4];
	Soldier** soldier = new Soldier*[4];
	SoldierFactory** soldierFactory = new SoldierFactory*[4];
	//intantiate the zombie objects in the zombies array
	zombies[0] = new Zombie("bite", 2);
	zombies[1] = new Zombie("slash", 3);
	zombies[2] = new Zombie("spit", 4);
	zombies[3] = new Zombie("pounce", 5);
	//create factory objects in soldierFactory array
	soldierFactory[0] = new SniperFactory();
	soldierFactory[1] = new BerserkerFactory();
	soldierFactory[2] = new EngineerFactory();
	soldierFactory[3] = new MedicFactory();
	// intantiate the factories and assign to soldiers array
	soldier[0] = soldierFactory[0]->createSoldier("XTX");
	soldier[1] = soldierFactory[1]->createSoldier("YTY");
	soldier[2] = soldierFactory[2]->createSoldier("MTM");
	soldier[3] = soldierFactory[3]->createSoldier("TMT");

	// each soldier vs 4 zombies
	for(int i = 0 ; i < 4; i++){
		for(int j = 0; j < 4; j++){
			// create the momento
			SoldierMomento* so = soldier[i]->createSoldierMomento();
			ZombieMomento* zo = zombies[i]->createMomento();
			// store the momento
			zombieStore.store(zo);
			soldierStore.store(so);
			//commence the battle
			soldier[i]->attack(zombies[j]);
			//display the result
			if(soldier[i]->getHealth() > 0){
				cout << "Soldier Won" << endl;
			}
			else{
				cout << "Zombies Won" << endl;
			}
			//reinstate the momento
			SoldierMomento* sM = soldierStore.getMomento();
			ZombieMomento* zM = zombieStore.getMomento();
			zombies[j]->makeZombieMomento(zM);
			soldier[i]->makeMomento(sM);
			// tah dah
			cout << " ---------------------------------- " << endl;
		}
	}
	//cleanup
	for(int i = 0 ; i < 4; i++){
		delete soldier[i]; 
		delete zombies[i]; 
		delete soldierFactory[i];
	}
    delete[] soldier;
    delete[] zombies;
    delete[] soldierFactory;
	// not a fun practical
	return 0;
}
