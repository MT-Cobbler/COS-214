#include <iostream>
using namespace std;

class Singleton{
    public:
        Singleton& getInstance(){
            static Singleton* onlyInstace;
            return *onlyInstace;
        }
        void print(){cout << data;}
        void setData(int i) {
            data = i;
        }
    protected:
        Singleton(){}
        virtual ~Singleton(){}
        Singleton(Singleton* s){}
        Singleton& operator=(const Singleton&){}
    private:
        int data;
};
int main(){
    Singleton* s = Singleton::getInstance();

    return 0;
}