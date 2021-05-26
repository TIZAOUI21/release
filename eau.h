#pragma once
#include <string>
#include "cout.h"

class eau : public cout {
private:
    float DebitMachine=0;
    float CoutEau=0;
public:
    eau();
    eau(std::string nomMachine, float DebitMachine, float CoutEau);
    ~eau();
    double calculerCout(int nombreJour);
    void afficherCout();


};