using namespace std;
//#include <string>
#include "electricite.h"

int electricite::getVoltageMachine(){
    return this->VoltageMachine;
}
int electricite::setVoltageMachine(int VoltageMachine) {
    return this->VoltageMachine=VoltageMachine;
}
int electricite::getAmpirageMachinee(){
    return this->AmpirageMachine;
}
int electricite::setAmpirageMachine(int AmpirageMachine) {
    return this->AmpirageMachine=AmpirageMachine;
}
int electricite::getCoutElectricite(){
    return this->CoutElectricite;
}
int electricite::setCoutElectricite(int CoutElectricite) {
    return this->CoutElectricite;
}
