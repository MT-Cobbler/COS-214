#include <iostream>
using namespace std;

class RealValue{
    protected:
        double value;
        string identity;
    public:
        RealValue(){
            cout << "RealValue" << endl;
        }
        virtual RealValue* clone() = 0;
        virtual void display() = 0;
        virtual ~RealValue(){
            cout << "Destruct RealValue" << endl;
        }
};

class ArrRealValue : public RealValue{
    public:
        ArrRealValue(){
            value = 2;
            identity = "Arr";
        }
        ArrRealValue(ArrRealValue* r){
            value = r->value;
            identity = r->identity;
        }
        RealValue* clone(){
            RealValue* newA = new ArrRealValue(*this);
            return newA;
        }
        void display(){
            cout << this->identity << " " << this->value << endl;
        }
        ~ArrRealValue(){}
};

class PlainRealValue : public RealValue{
    public:
        PlainRealValue(){
            value = 2;
            identity = "Plain";
        }
        PlainRealValue(PlainRealValue* r){
            value = r->value;
            identity = r->identity;
        }
        RealValue* clone(){
            RealValue* newA = new PlainRealValue(*this);
            return newA;
        }
        void display(){
            cout << this->identity << " " << this->value << endl;
        }
        ~PlainRealValue(){}
};

class FileRealValue : public RealValue{
public:
        FileRealValue(){
            value = 2;
            identity = "File";
        }
        FileRealValue(FileRealValue* r){
            value = r->value;
            identity = r->identity;
        }
        RealValue* clone(){
            RealValue* newA = new FileRealValue(*this);
            return newA;
        }
        void display(){
            cout << this->identity << " " << this->value << endl;
        }
        ~FileRealValue(){}
};

class Manager{
    // create the prototypes
    private:
        RealValue* r1;
        RealValue* r2;
        RealValue* r3;
    public:
        Manager(){
            r1 = new ArrRealValue();
            r2 = new PlainRealValue();
            r3 = new FileRealValue();
        }
        void showAll(){
            r1->display();
            r2->display();
            r3->display();
        }
        RealValue* getReal(){
            cout << "Which real value do you want: " << endl;
            int choice = 0;
            cout << "1 : Arr\n" << "2 : Plain\n" << "3 : File\n";
            cout << "Choose a number: " ;
            cin >> choice;
            if(choice == 1){
                return r1->clone();
            }
            else if(choice == 2){
                return r2->clone();
            }
            else{
                return r3->clone();
            }
        }
};

int main(){
    Manager* newM = new Manager();
    newM->showAll();
    RealValue* gB = newM->getReal();
    gB->display();
    return 0;
}