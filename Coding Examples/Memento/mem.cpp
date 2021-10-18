#include <iostream>
using namespace std;

class Memento{
    private:
        friend class Originator;
        int state;
        Memento(const int s){ state = s; }
        void setState(const int s){this->state = s; }
        int getState(){return this->state;}
};

class Originator{
    private:
        int state;
    public:
        // creates a memento
        Memento* createMemento(){ return new Memento(state);}
        void setMemento(Memento* s){state = s->state;} 
};

class CareTaker{
    private:    
        int* numbers; int size;
        Originator* originator;
    public:
        CareTaker(Originator* const o){
            numbers = new int[0];
            numbers[0] = 0;
            size = 0;
        }
        ~CareTaker(){ cout << "Bye Bye\n"; for(int i = 0; i < size; i++){numbers[i] = 0;}delete numbers;}
        void save(){

            numbers = new int[size+1];
            size++;
            numbers[size -1] = originator->createMemento();
        }
        
};