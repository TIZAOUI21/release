using namespace std;
#include "eau.h"
#include <string>
#include "cout.h"



eau::eau(std::string nomMachine, float DebitMachine, float CoutEau) :cout(nomMachine){
    this->DebitMachine=DebitMachine;
    this->CoutEau=CoutEau;
}
eau::~eau(){
}
double eau::calculerCout(int nombreJour){
    double  prix = 0;
    prix = (this->DebitMachine * 86400.0 * 1.0 * ((this->CoutEau) / 100.0))/100;
    prix =  nombreJour*prix;
    return prix;
}
void eau::afficherCout(){
    std::cout << getNom()<<":"<<"calculerCout()"<<"$"<<std::endl;
}

