#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Target{
    public:
        Target(){}
        virtual ~Target(){}
        virtual string Request(){
            return "Target: The default target's behaviour.";
        }
};

class Adaptee{
    public:
        Adaptee(){}
        ~Adaptee(){}
        string specificRequest(){
            return "Special behaviour for the Adaptee.";
        }
};

class Adaptor : public Target{
    private:
        Adaptee* adaptee_;
    public:
        Adaptor(Adaptee* a) : adaptee_(a){}
        ~Adaptor(){}
        string Request(){
            string to_reverse = this->adaptee_->specificRequest();
            return to_reverse;
        }

};
class Client{
    private:
        Target* target_;
    public:
        Client(Target* t) : target_(t){}
        ~Client(){delete target_;}
        string getString(){
            return this->target_->Request();
        }
};
int main(){
    Target* newT = new Adaptor(new Adaptee());
    Client* c = new Client(newT);
    cout << c->getString() << endl;
    return 0;
}