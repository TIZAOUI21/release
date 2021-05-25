#pragma once
#include <string>
#include "cout.h"

class eau : public cout{
private:
    float DebitMachine;
    int CoutEau;
public:
    eau();
    eau(std::string nomMachine, float DebitMachine, int CoutEau);
    ~eau();

    double calculerCout(int nombreJour);
    void afficherCout();
