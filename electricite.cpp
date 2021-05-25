using namespace std;
//#include <string>
#include "electricite.h"


Electricite::Electricite(std::string nomMachine, int VoltageMachine,int AmpirageMchine,int CoutElectricite) : cout(nomMachine){
        this->VoltageMachine=VoltageMachine;
        this->AmpirageMchine=AmpirageMchine;
        this->CoutElectricite=CoutElectricite;
}
Electricite::~Electricite(){
}
    double Electricite::calculerCout(int nombreJour){
         double prix;
         prix = (((double)this->AmpirageMchine * this->VoltageMachine) / 1000.0) * 24 * (CoutElectricite / 100.0);
         prix= prix * nombreJour;
         return prix;}
    void Electricite::afficherCout(){
         std::cout << this->nomMachine <<"  :  "<<this->calculerCout()<<"$"<<std::endl;
}
