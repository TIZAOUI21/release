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
// fonction pour calculer le cout d'eau  pour un nombre de jours saie par l'utilisateur
double eau::calculerCout(int nombreJour){
    double  prix = 0;
    prix = (this->DebitMachine * 86400.0 * 1.0 * ((this->CoutEau) / 100.0))/100;
    prix =  nombreJour*prix;
    return prix;
}
// procedure  pour afficher le nom de la machine et le cout determiner par la fonction  calculerCout
void eau::afficherCout(){
    std::cout << getNom()<<":"<<calculerCout()<<"$"<<std::endl;
}

