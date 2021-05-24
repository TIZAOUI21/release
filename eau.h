#ifndef RELEASE_EAU_H
#define RELEASE_EAU_H
#include <string>
#include "cout.h"


class eau : public cout{
private:
    float DebitMachine;
    int CoutEau;
public:
    eau();
    eau(float DebitMachine, int CoutEau);
    float getDebitMachine();
    void setDebitMachine(float DebitMachine);
    int getCoutEau();
    void setCoutEau(int CoutEau);
    eau::cout(nomMachine) {this->nomMachine};
    double calculercout();
};
#endif //RELEASE_EAU_H
