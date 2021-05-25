using namespace std;
#include "eau.h"
#include <string>



eau::eau(std::string nomMachine, float DebitMachine, int CoutEau) :cout(nomMachine){
    this->DebitMachine=DebitMachine;
    this->CoutEau=CoutEau;
}
eau::~eau(){
}
double eau::calculerCout(int nombreJour){
    prix = (this->DebitMachine * 86400.0 * 1.0 * ((this->CoutEau) / 100.0))/100;
    prix =  nombreJour*prix;
    return prix;
}
void eau::afficherCout(){
    std::cout << this->nomMachine <<":"<<this->calculerCout()<<"$"<<std::endl;
}


