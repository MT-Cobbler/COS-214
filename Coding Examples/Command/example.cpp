#include <iostream>

using namespace std;
// Receivers
class Fan{
    public:
        void turnOn(){cout << "Fan is rotating and the"; }
        void turnOff(){cout << "Fan is not rotating and the"; }
};
class Light{
    public:
        void turnOn(){ cout << " light is on" << endl;}
        void turnOff(){ cout << " light is off" << endl;}
};
// Commands
class Fan;
class Light;
class Command{
    protected:
        Fan* f;
        Light* l;
    public:
        Command(Fan* fan, Light* light){
            this->f = fan;
            this->l = light;
        }
        virtual ~Command(){delete f; delete l;}
        Fan* getFan(){return this->f;}
        Light* getLight(){return this->l;}
        virtual void execute() = 0;
};
class OnCommand : public Command{
    public:
        OnCommand(Fan* fan, Light* light) : Command(fan, light){}
        ~OnCommand(){}
        void execute(){
            getFan()->turnOn();
            getLight()->turnOn();
        }
};
class OffCommand : public Command{
    public:
        OffCommand(Fan* fan, Light* light) : Command(fan, light){}
        ~OffCommand(){}
        void execute(){
            getFan()->turnOff();
            getLight()->turnOff();
        }
};


// Invoker
class Switch{
    private:
        Command* cOne;
        Command* cTwo;
        int on;
    public:
        Switch(){
            cOne = new OnCommand(new Fan(), new Light());
            cTwo = new OffCommand(new Fan(), new Light());
            on = 0; // 0 = off | 1 = on
        }
        ~Switch(){
            delete cOne;
            delete cTwo;
        }
        void toggleFan(){
            if(on == 0){
                // if it is off
                cOne->execute();
                on = 1;
            }
            else{
                // if it is on
                cTwo->execute();
                on = 0;
            }
        }
};
int main(){
    //  Client
    Switch* flip = new Switch();
    flip->toggleFan();
    flip->toggleFan();
    flip->toggleFan();
    flip->toggleFan();
}