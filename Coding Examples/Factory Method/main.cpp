#include <iostream>

using namespace std;

class Car{
    public:
        Car(){ cout << "Created car: ";}
        Car(int y, string mo, string ma){this->year = y; this->model = mo; this->make = ma;}
        ~Car(){}
        virtual void message() = 0;
    protected:
        int year;
        string model;
        string make;
        void setModel(string m){this->model = m;}
        void setMake(string m){this->make = m;}
        void setYear(int y){this->year = y;}
        string getModel(){return this->model;}
        string getMake(){return this->make;}
        int getYear(){return this->year;}
};
class Ford : public Car{
    public:
        Ford(int y, string mo ) : Car(y, mo, this->make){
            this->make = "Ford";
        }
        void messages(){
            cout << "Hi there. I am a " << this->getYear() << " " << this->getMake() << " " << this->getModel() << ".\n";
        }
};
class Audi : public Car{
    public:
        Audi(int y, string mo ) : Car(y, mo, this->make){
            this->make = "Audi";
        }
        void messages(){
            cout << "Hi there. I am a " << this->getYear() << " " << this->getMake() << " " << this->getModel() << ".\n";
        }
};
class BMW : public Car{
    public:
       BMW(int y, string mo ) : Car(y, mo, this->make){
            this->make = "Audi";
        }
        void messages(){
            cout << "Hi there. I am a " << this->getYear() << " " << this->getMake() << " " << this->getModel() << ".\n";
        }
};
// Factory Method
class CarFactory{
    public:
        CarFactory(){}
        virtual ~CarFactory(){}
        virtual void createFactory() = 0;
};

class FordFactory : public CarFactory{
    public:
        FordFactory(){}
        ~FordFactory(){}
        void createFactory(){
            Ford* f = new Ford(2015, "Figo");
        }
};class AudiFactory : public CarFactory{
    public:
        AudiFactory(){}
        ~AudiFactory(){}
        void createFactory(){
            Audi* f = new Audi(2012, "A3");
        }
};
class BMWFactory : public CarFactory{
    public:
        BMWFactory(){}
        ~BMWFactory(){}
        void createFactory(){
            BMW* f = new BMW(2021, "M4");
        }
};
int main(){
    return 0;
}