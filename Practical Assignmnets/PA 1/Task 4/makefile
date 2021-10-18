ofiles = main.o Berserker.o BerserkerFactory.o Engineer.o EngineerFactory.o Medic.o MedicFactory.o Sniper.o SniperFactory.o Soldier.o SoldierFactory.o Zombie.o SoldierMomento.o SoldierState.o SoldierStore.o ZombieMomento.o ZombieState.o ZombieStore.o
gpp_o = g++ -c -std=c++11 -static
main: $(ofiles)
	g++ -std=c++11 -static $(ofiles) -o main
main.o : main.cpp BerserkerFactory.h EngineerFactory.h MedicFactory.h SniperFactory.h SoldierFactory.h Soldier.h Berserker.h Engineer.h Medic.h Sniper.h Zombie.h SoldierMomento.h SoldierState.h SoldierStore.h ZombieMomento.h ZombieState.h ZombieStore.h
	$(gpp_o) main.cpp
BerserkerFactory.o: BerserkerFactory.cpp BerserkerFactory.h
	$(gpp_o) BerserkerFactory.cpp
EngineerFactory.o: EngineerFactory.cpp EngineerFactory.h
	$(gpp_o) EngineerFactory.cpp
MedicFactory.o: MedicFactory.cpp MedicFactory.h
	$(gpp_o) MedicFactory.cpp
SniperFactory.o: SniperFactory.cpp SniperFactory.h
	$(gpp_o) SniperFactory.cpp
SoldierFactory.o: SoldierFactory.cpp SoldierFactory.h
	$(gpp_o) SoldierFactory.cpp
Soldier.o: Soldier.cpp Soldier.h
	$(gpp_o) Soldier.cpp
Engineer.o: Engineer.cpp Engineer.h
	$(gpp_o) Engineer.cpp
Medic.o: Medic.cpp Medic.h
	$(gpp_o) Medic.cpp
Sniper.o: Sniper.cpp Sniper.h
	$(gpp_o) Sniper.cpp
Zombie.o: Zombie.cpp Zombie.h
	$(gpp_o) Zombie.cpp
SoldierMomento.o: SoldierMomento.cpp SoldierMomento.h
	$(gpp_o) SoldierMomento.cpp
SoldierState.o: SoldierState.cpp SoldierState.h
	$(gpp_o) SoldierState.cpp
SoldierStore.o: SoldierStore.cpp SoldierStore.h
	$(gpp_o) SoldierStore.cpp
ZombieMomento.o: ZombieMomento.cpp ZombieMomento.h
	$(gpp_o) ZombieMomento.cpp
ZombieState.o: ZombieState.cpp ZombieState.h
	$(gpp_o) ZombieState.cpp
ZombieStore.o: ZombieStore.cpp ZombieStore.h
	$(gpp_o) ZombieStore.cpp
run: main
	./main
clean:
	rm *.o main