#include <iostream>

using namespace std;

class Command{
    public:
        virtual void execute() = 0;
};

// First command
class OnOffCommand : public Command{
    private:
        string on;
    public:
        OnOffCommand(){
            on = "off";
        }
        void execute(){
            cout << "TV is currently " << on << endl;
            if(on == "off"){
                on = "on";
            }
            else{
                on = "off";
            }
            cout << "It is now " << on << endl;
        }
};

// Second Command
class ChangeChannelCommand : public Command{
    private:
        int channel;
    public:
        ChangeChannelCommand(){
            channel = 1;
        }
        void execute(){
            cout << "TV is currently on channel " << channel << endl;
            if(channel == 5){
                channel = 1;
            }
            else{
                channel++;
            }
            cout << "Channel changed to " << channel << endl;
        }
};

class Invoker{
    private:
        Command* buttons[2];
    public:
        Invoker(){
            buttons[0] = new OnOffCommand();
            buttons[1] = new ChangeChannelCommand();
        }
        void powerBtn(){
            buttons[0]->execute();
        }
        void channelBtn(){
            buttons[1]->execute();
        }
};

int main(){
    // implment the invoker here
    Invoker* TVRemote = new Invoker();
    TVRemote->powerBtn();
    TVRemote->channelBtn();
    TVRemote->channelBtn();
    TVRemote->channelBtn();
    TVRemote->channelBtn();
    TVRemote->powerBtn();
    TVRemote->powerBtn();
    TVRemote->powerBtn();
    TVRemote->channelBtn();
    TVRemote->channelBtn();
    return 0;
}