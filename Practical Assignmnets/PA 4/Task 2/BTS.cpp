#include "BTS.h"

BTS::BTS(string n){
    name = n;
    alarmState = "clear";
    // cout << "BTS, " << name << endl;
}
BTS::~BTS(){

}

string BTS::getAlarm(){
    return alarmState;
}
void BTS::setAlarm(string a){
    alarmState = a;
}

string BTS::getName(){
    return name;
} 