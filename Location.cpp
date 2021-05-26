#include "location.h"
#include <string>
#include "cout.h"

location::location (std::string nomMachine, int ValeurEspaceMachine,int CoutLocation) : cout(nomMachine){
    this->ValeurEspaceMachine=ValeurEspaceMachine;
    this->CoutLocation=CoutLocation;
}
location::~location(){};
// fonction pour calculer le cout de location  pour un nombre de jours saie par l'utilisateur
    double location::calculerCout(int nombreJour) {
        double prix = 0;
        prix = (((double) this->CoutLocation / 30 * this->ValeurEspaceMachine) / 100.0);
        prix = prix * nombreJour;
        return prix;
    }

// procedure  pour afficher le nom de la machine et le cout determiner par la fonction  calculerCout
        void location::afficherCout( ) {
            std::cout << getNom() << ":" << calculerCout()<< "$" << std::endl;
        }



