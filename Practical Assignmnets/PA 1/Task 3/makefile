ofiles = main.o Berserker.o BerserkerFactory.o Engineer.o EngineerFactory.o Medic.o MedicFactory.o Sniper.o SniperFactory.o Soldier.o SoldierFactory.o Zombie.o
gpp_o = g++ -c -std=c++11 -static
main: $(ofiles)
	g++ -std=c++11 -static $(ofiles) -o main
main.o : main.cpp BerserkerFactory.h EngineerFactory.h MedicFactory.h SniperFactory.h SoldierFactory.h Soldier.h Berserker.h Engineer.h Medic.h Sniper.h Zombie.h
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


run: main
	./main
clean:
	rm *.o main