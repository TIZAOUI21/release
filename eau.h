#ifndef RELEASE_EAU_H
#define RELEASE_EAU_H
#include <string>
#include "cout.h"
class eau : public cout{
private:
    float DebitMachine;
    int CoutEau;
public:
    eau(float DebitMachine, int CoutEau);
    int getDebitMachine();
    void setDebitMachine(float DebitMachine);
    int getCoutEau();
    void setAmpirageMachine(int CoutEau);
};
#endif //RELEASE_EAU_H
