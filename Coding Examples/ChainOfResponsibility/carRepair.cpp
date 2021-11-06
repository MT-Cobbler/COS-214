#include <iostream>
using namespace std;

class Handler{
    private:
        Handler* next;
    public:
        Handler(){
            next = nullptr;
        };
        virtual ~Handler(){
            delete next;
        }
        virtual void requestHandler(string n){};
        virtual void setNext(Handler* n){
            next = n;
        }
        virtual Handler* getNext(){
            return next;
        }
};

class ConcreteHandler1 : public Handler{
    public:
        void requestHandler(string n){
            if(n == "tyres"){
                cout << "ConcreteHandler1 will take care of the repairs" << endl;
            }
            else{
                if(getNext()){
                    cout << "ConcreteHandler1 passes on" << endl;
                    getNext()->requestHandler(n);
                }
                else{
                    cout << "This vehicle can't be repaired" << endl;
                }
            }
        }
};

class ConcreteHandler2 : public Handler{
    public:
        void requestHandler(string n){
            if(n == "lights"){
                cout << "ConcreteHandler2 will take care of the repairs" << endl;
            }
            else{
               if(getNext()){
                    cout << "ConcreteHandler2 passes on" << endl;
                    getNext()->requestHandler(n);
                }
                else{
                    cout << "This vehicle can't be repaired" << endl;
                }
            }
        }
};

class ConcreteHandler3 : public Handler{
    public:
        void requestHandler(string n){
            if(n == "engine"){
                cout << "ConcreteHandler3 will take care of the repairs" << endl;
            }
            else{
                cout << "ConcreteHandler3 passes on" << endl;
                if(getNext()){
                    cout << "ConcreteHandler3 passes on" << endl;
                    getNext()->requestHandler(n);
                }
                else{
                    cout << "This vehicle can't be repaired" << endl;
                }
            }
        }
};

class Client{
    private:
        Handler* engineers[3];
    public:
        Client(){
            engineers[0] = new ConcreteHandler1();
            engineers[1] = new ConcreteHandler2();
            engineers[2] = new ConcreteHandler3();
            engineers[0]->setNext(engineers[1]);
            engineers[1]->setNext(engineers[2]);
        }
        ~Client(){
            delete engineers[0];
            delete engineers[1];
            delete engineers[2];
        }
        void repair(string n){
            engineers[0]->requestHandler(n);
        }
};

int main(){

    string options[] = {"tyres", "lights", "engine"};
    int choice;
    cout << "Select your repair option: " << endl << "1. Tyres\n" << "2. Lights\n" << "3. Engine" << endl;
    do
    {
        cout << "Enter your option: ";
        cin >> choice;
    } while (choice < 1 || choice > 3);
    
    Client* repairTeam = new Client();
    switch (choice)
    {
        case 1:
            repairTeam->repair(options[0]);
            break;
        case 2:
            repairTeam->repair(options[1]);
            break;
        case 3:
            repairTeam->repair(options[2]);
            break;
    
    default:
        break;
    }
    return 0;
}