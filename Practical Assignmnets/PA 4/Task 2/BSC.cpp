#include "BSC.h"

BSC::BSC(string n){
    name = n;
    alarmState = "clear";
    // cout << "BSC, " << name << endl;
}
BSC::~BSC(){

}

string BSC::getAlarm(){
    return alarmState;
}
void BSC::setAlarm(string a){
    alarmState = a;
}

string BSC::getName(){
    return name;
} 