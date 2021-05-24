#include "location.h"
using namespace std;
#include <string>

location::location (std::string nomMachine, int ValeurEspaceMachine,int CoutLocation) : cout(nomMachine){
    this->ValeurEspaceMachine=ValeurEspaceMachine;
    this->CoutLocation=CoutLocation;
}
location::~location(){};
int location::getValeurEspaceMachine(){
    return this->CoutLocation;
}
//int location::setValeurEspaceMachine(int CoutLocation) {
//    return this->CoutLocation=CoutLocation;
//}
int location::getCoutLocation() {
    return this->CoutLocation;
}
//int location::setCoutLocation(int CoutLocation) {
//        return this->CoutLocation=CoutLocation;
//    }
double location::calculercout(){
    return 0.0;
}

