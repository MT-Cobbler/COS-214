#include <iostream>
using namespace std;

class Soldier{
    public:
        virtual Soldier* clone() = 0;
        string getType(){
            return this->type;
        }
        void print(){
            cout << this->name << " " << this->type << " " << this->age << endl;
        }
    protected:
        string name;
        string type;
        int age;
};

class Ber : public Soldier{
    public:
        Ber(){
            name = "Ben";
            type = "Berserker";
            age = 25;
        }
        Ber* clone(){
            return new Ber(*this);
        }   
};
class Sni : public Soldier{
    public:
        Sni(){
            name = "Storm";
            type = "Sniper";
            age = 21;
        }
        Sni* clone(){
            return new Sni(*this);
        }
};
class Med : public Soldier{
    public:
        Med(){
            name = "Matthew";
            type = "Medic";
            age = 22;
        }
        Med* clone(){
            return new Med(*this);
        }
};
class Eng : public Soldier{
    public:
        Eng(){
            name = "Ethan";
            type = "Engineer";
            age = 30;
        }
        Eng* clone(){
             return new Eng(*this);
        }
};


class PrototypeManger{
    private:
        Soldier** prototypes;
        int size;
    public:
        PrototypeManger(){
            prototypes = new Soldier*[0];
            prototypes[0] = NULL;
            size =0;
        }
        ~PrototypeManger(){
            for(int i = 0 ; i < size; i++){
                prototypes[i] = NULL;
                delete prototypes[i];
            }
            delete prototypes;
        }
        void addPrototype(Soldier* s){
            if(prototypes[0] == NULL){
                prototypes = new Soldier*[1];
                prototypes[0] = s;
                size = 1;
            }
            else{
                Soldier** temp = new Soldier*[size];
                for(int i = 0 ; i < size; i++){
                    temp[i] = prototypes[i];
                }
                prototypes = new Soldier*[++size];
                for(int i = 0 ; i < size-1; i++){
                    prototypes[i] = temp[i];
                }
                prototypes[size - 1] = s;
            }
        }
        void removePrototype(Soldier* s){
            if(size == 0){
                cout << "No more prototypes" << endl;
            }
            else{
                for(int i = 0 ; i <  size; i++){
                    if(s->getType() == prototypes[i]->getType()){
                        // move it to the back of the array
                        if(i == size - 1){
                            // already at the back
                        }
                        else{
                            Soldier* current = prototypes[i];
                            Soldier* back = prototypes[size-1];
                            prototypes[i] = back;
                            prototypes[size - 1] = NULL;
                            current == NULL;
                        }
                        // temp array for resizing
                        Soldier** temp = new Soldier*[--size];
                        for(int i = 0 ; i < size; i++){
                            temp[i] = prototypes[i];
                        }
                        prototypes = new Soldier*[size];
                        for(int i = 0 ; i < size; i++){
                            prototypes[i] = temp[i];
                        }
                    }
                }
            }
        }
        Soldier* getSoldier(){
            return prototypes[0];
        }
};

class Client{
    private:
        PrototypeManger* manager;
    public:
        Client(){
            manager = new PrototypeManger();
            manager->addPrototype(new Ber());
            manager->addPrototype(new Med());
            manager->addPrototype(new Eng());
            manager->addPrototype(new Sni());
        }
        ~Client(){
            delete manager;
        }
        Soldier* getS(){
            Soldier* s = manager->getSoldier()->clone();
            return s;
        }
};

int main(){
    Client* newC = new Client();
    Soldier* s = newC->getS();
    s->print();
    return 0;
}