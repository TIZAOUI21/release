#pragma once
#include <string>
#include "cout.h"

class location : public cout {
private:
     int ValeurEspaceMachine=0;
     int CoutLocation=0;
public:
    location();
    location(std::string nomMachine, int ValeurEspaceMachine,int CoutLocation);
    ~location();
    void afficherCout( ) ;
    double calculerCout(int nombreJour);
};


