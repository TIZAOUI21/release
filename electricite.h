#pragma once
#include <string>
#include "cout.h"

class Electricite : public cout {

private:
       int VoltageMachine;
       int AmpirageMchine;
       int CoutElectricite;
public:
    Electricite(std::string nomMachine, int VoltageMachine,int AmpirageMchine,int CoutElectricite);
    ~Electricite();
    double calculerCout(int nombreJour);
    void afficherCout();

