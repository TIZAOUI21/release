#include "Location.h"
using namespace std;
#include <string>

location::Location (int ValeurEspaceMachine,int CoutLocation) : cout(nomMachine){
    this->ValeurEspaceMachine=ValeurEspaceMachine;
    this->CoutLocation=CoutLocation;
}
int Location::getValeurEspaceMachine(){
    return this->CoutLocation;
}
int Location::setValeurEspaceMachine(int CoutLocation) {
    return this->CoutLocation=CoutLocation;
}
int Location::getCoutLocation() {
    return this->CoutLocation;
}
int Location::setCoutLocation(int CoutLocation) {
        return this->CoutLocation=CoutLocation;
    }
double calculercout(){
}

