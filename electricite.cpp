using namespace std;
//#include <string>
#include "electricite.h"


Electricite::Electricite(std::string nomMachine, int VoltageMachine,int AmpirageMchine,int CoutElectricite) : cout(nomMachine){
this->VoltageMachine=VoltageMachine;
this->AmpirageMchine=AmpirageMchine;
this->CoutElectricite=CoutElectricite;
}
int Electricite::getVoltageMachine(){
    return this->VoltageMachine;
}
void Electricite::setVoltageMachine(int VoltageMachine) {
     this->VoltageMachine=VoltageMachine;
}
int Electricite::getAmpirageMachine(){
    return this->AmpirageMchine;
}
void Electricite::setAmpirageMachine(int AmpirageMachine) {
     this->AmpirageMchine=AmpirageMachine;
}
Electricite::~Electricite(){
}
int Electricite::getCoutElectricite(){
    return this->CoutElectricite;
}
void Electricite::setCoutElectricite(int CoutElectricite) {
     this->CoutElectricite;
}
double Electricite::calculercout(){
    return 0.0;
}
