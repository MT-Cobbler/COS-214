#include <iostream>

using namespace std;

class Person{
    // defines the skeletons
    public:
        Person(){
            cout << "Person Created: ";
        }
        virtual ~Person(){}
        // template method
        void TemplateMethod(){
            cout << "Hi there. My name is " << this->getName() << " and I am " << this->getAge() << " years old." << endl;
        }
    protected:
        void setName(string n){this->name = n;}
        void setAge(int a){this->age = a;}
        int getAge(){return this->age;}
        string getName(){return this->name;}
        int age;
        string name;
        virtual void message() = 0;

};

class Adult : public Person{
    public:
        Adult(int a, string n){
            cout << "Adult" << endl;
            this->name = n; this->age = a;
        }
        void message(){
            cout << "Getting old is a blessing." << endl;
        }
};
class Teenager : public Person{
    public:
        Teenager(int a, string n){
            cout << "Teenager\n";
            this->name = n; this->age = a;
        }
        void message(){
            cout << "Ag! Life sucks!" << endl;
        }
};
class Kid : public Person{
    public:
        Kid(int a, string n){
            cout << "Kid\n";
            this->setAge(a); this->setName(n);
        }
        void message(){
            cout << "I can't wait to get old." << endl;
        }
};

int main(){
    Person* p = new Adult(45, "Matt");
    p->TemplateMethod();
    p = new Teenager(18, "Steven");
    p->TemplateMethod();
    p = new Kid(8, "Alex");
    p->TemplateMethod();
    return 0;
}