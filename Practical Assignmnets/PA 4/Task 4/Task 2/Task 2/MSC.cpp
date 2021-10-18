#include "MSC.h"

MSC::MSC(string n){
    name = n;
    alarmState = "clear";
    // cout << "MSC, " << name << endl;
}
MSC::~MSC(){

}

string MSC::getAlarm(){
    return alarmState;
}
void MSC::setAlarm(string a){
    alarmState = a;
}

string MSC::getName(){
    return name;
} 