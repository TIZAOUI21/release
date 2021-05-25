#include "location.h"
using namespace std;
#include <string>

location::location (std::string nomMachine, int ValeurEspaceMachine,int CoutLocation) : cout(nomMachine){
    this->ValeurEspaceMachine=ValeurEspaceMachine;
    this->CoutLocation=CoutLocation;
}
location::~location(){};
    double location::calculerCout(int nombreJour){
    prix = (((double)this->CoutLocation / 30 * this->ValeurEspaceMachine) / 100.0);
    prix = prix*nombreJour;
    }
    void location::afficherCout() {
    std::cout << this->nomMachine <<":"<<this->calculerCout()<<"$"<<std::endl;
}
