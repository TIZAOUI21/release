using namespace std;
//#include <string>
#include "electricite.h"
#include "cout.h"

Electricite::Electricite(std::string nomMachine, int VoltageMachine,int AmpirageMchine,int CoutElectricite) : cout(nomMachine){
        this->VoltageMachine=VoltageMachine;
        this->AmpirageMchine=AmpirageMchine;
        this->CoutElectricite=CoutElectricite;
}
Electricite::~Electricite(){
}
// fonction pour calculer le cout d'electricite  pour un nombre de jours saie par l'utilisateur
double Electricite::calculerCout(int nombreJour) {
    double prix;
    prix = (((double)this->AmpirageMchine * this->VoltageMachine) / 1000.0) * 24 * (CoutElectricite / 100.0);
    prix= prix * nombreJour;
    return prix;
    }
// procedure  pour afficher le nom de la machine et le cout determiner par la fonction  calculerCout
void Electricite::afficherCout(){
    std::cout << getNom()<<":"<<calculerCout()<<"$"<<std::endl;
}
