#include <iostream>
using namespace std;

class Subject{
    public:
        virtual void request() = 0;
};

class RealSubject : public Subject{
    public:
        void request(){
            cout << "RealSubject: Handling event" << endl;
        }
};

class Proxy : public Subject{
    private:
        RealSubject* rSubject;
        bool CheckAccess(){
            cout << "Proxy checking access prior to firing a real request" << endl;
            return true;
        }
        void LogAccess(){
            cout << "Proxy: Loggin the time of request." << endl;
        }
    public:
        Proxy(RealSubject* s) : rSubject(s){}
        ~Proxy(){delete rSubject;}
        void request(){
            if(this->CheckAccess()){
                this->rSubject->request();
                this->LogAccess();
            }
        }
};

int main(){
    cout << "Client: Executing the client code with a real subject:" << endl;
    RealSubject* rs = new RealSubject();
    rs->request();
    cout << endl;
    cout << "Client: Executing the same client code with a proxy:" << endl;
    Proxy* p = new Proxy(rs);
    p->request();
    return 0;
}
