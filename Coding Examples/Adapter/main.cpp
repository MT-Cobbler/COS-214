#include <iostream>
using namespace std;
class ElectronicBillboard{
    
    private:
        string message;
        int state;
    public:
        ElectronicBillboard(){
            state = 0;
            message = "Welcome to the Billboard";
        }
        void onoff(){
            string promt = isOn() ? "The board is currently off" : "The board is currently on";
            cout << promt << endl;
            state == 0 ? state = 1 : state = 0;
            promt = isOn() ? "Board is now off" : "Board is now on";
            cout << promt << endl;
        }
        void updateBoard(){
            cout << message << endl;
        }
        void updateMessage(){
            cout << "What message would you like to diplay? " << endl;
            char msg[20]; 
            cin.getline(msg, 25) ;
            cout << "Old message: " << message << endl;
            message = msg;
            cout << "Message updated: " << message << endl;
        }
        bool isOn(){
            return state == 0;
        }
};

class Billboard{
    public:
        virtual void changeState() = 0;
        virtual void changeMessage() = 0;
        virtual void displayMessage() = 0;
};
class TrafficBillboard : public Billboard{
    private:
        ElectronicBillboard* eboard;
    public:
        TrafficBillboard(){
            eboard = new ElectronicBillboard();
        }
        virtual void changeState(){
            eboard->onoff();
        }
        virtual void changeMessage(){
            eboard->updateMessage();
        }
        virtual void displayMessage(){
            eboard->updateBoard();
        }
};



int main(){

    Billboard* t = new TrafficBillboard();
    t->changeState();
    t->displayMessage();
    t->changeMessage();
    t->displayMessage();
    t->changeState();
    return 0;
}