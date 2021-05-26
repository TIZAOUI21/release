#include "location.h"
#include <string>
#include "cout.h"

location::location (std::string nomMachine, int ValeurEspaceMachine,int CoutLocation) : cout(nomMachine){
    this->ValeurEspaceMachine=ValeurEspaceMachine;
    this->CoutLocation=CoutLocation;
}
location::~location(){};
    double location::calculerCout(int nombreJour) {
        double prix = 0;
        prix = (((double) this->CoutLocation / 30 * this->ValeurEspaceMachine) / 100.0);
        prix = prix * nombreJour;
        return prix;
    }
        void location::afficherCout( ) {
            std::cout << getNom() << ":" << calculerCout()<< "$" << std::endl;
        }



