#include <iostream>

using namespace std;

class Chatroom{
    protected:
        int nextid;
        Participant* particpant;
    public:
        Chatroom();
        ~Chatroom();
        int registerMe(Chatter* c){}
        void broadcast(string s);
        bool talkTo(int, string);
        void leave();
};

class ModuleChatroom : public Chatroom{
    protected:
        string name;
    public:
        ModuleChatroom(string s){name = s;}
};

class Chatter{
    public:
        Chatter();
        ~Chatter();
        virtual void receiveMessage(string m) = 0;
        virtual void sendMessage() = 0;
        void reg(Chatroom* c){
            chatroom = c;
            chatroom->registerMe(c);
        }
        void leave();
    protected:
        int myId;
        Chatroom* chatroom;
};

class Student : public Chatter{
    public:
        Student();
        void receiveMessage(string s);
        void sendMessage();
};
class Lecture : public Chatter{
    public:
        Lecture();
        void receiveMessage(string s);
        void sendMessage();
};

class Participant{
    public:
        int id;
        Chatter* chatter;
};

int main(){
    Chatroom * cr =  new ModuleChatroom("COS121");
    Chatter* student[2];
    Chatter* lecturer = new Lecture();
    student[0] = new Student(); student[1] = new Student();
    lecturer->reg(cr); student[0]->reg(cr); student[1]->reg(cr);

    student[0]->sendMessage(); student[0]->sendMessage();
    student[1]->sendMessage(); student[1]->sendMessage();
    
    student[1]->leave(); lecturer->leave();
    delete lecturer;
    for(int i = 0; i < 2; i++){
        delete student[i];
    }
    return 0;
}