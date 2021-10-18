#include "GGSN.h"

GGSN::GGSN(string n){
    name = n;
    alarmState = "clear";
    // cout << "GGSN, " << name << endl;
}
GGSN::~GGSN(){

}

string GGSN::getAlarm(){
    return alarmState;
}
void GGSN::setAlarm(string a){
    alarmState = a;
}

string GGSN::getName(){
    return name;
} 