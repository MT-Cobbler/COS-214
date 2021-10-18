#include "Person.h"
#include <iostream>

using namespace std;

int main(){
    // create a person object
    Person* person1 = new Person("Matt", 23, "Brooklands Esate 3");
    Person* person2 = new Person("Jon", 23, "Bischops Cournt");
    Person** people = new Person*[2];
    people[0] = person1;
    people[1] = person2;
    // display the content
    for(int i = 0 ; i < 2 ;i++ ){
        cout << "Person: " << i+1 << endl;
        cout << people[i]->getName() << ", " << people[i]->getAge() << ", " << people[i]->getAddress() << endl;
        cout << "---------------------------" << endl;
    }
    // create another person
    Person* q = new Person(*person1);
    cout << "Person: q" << endl;
    cout << q->getName() << ", " << q->getAge() << ", " << q->getAddress() << endl;
    q->setName("Jason"); q->setAge(27); q->setAddress("Midstream Estate");
    for(int i = 0 ; i < 2 ;i++ ){
        cout << "Person: " << i+1 << endl;
        cout << people[i]->getName() << ", " << people[i]->getAge() << ", " << people[i]->getAddress() << endl;
        cout << "---------------------------" << endl;
    }
    cout << "Person q" << endl;
    cout << q->getName() << ", " << q->getAge() << ", " << q->getAddress() << endl;
    return 0;
}