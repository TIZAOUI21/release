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
    eau(std::string nomMachine, float DebitMachine, int CoutEau);
    ~eau();
    float getDebitMachine();
    void setDebitMachine(float DebitMachine);
    int getCoutEau();
    void setCoutEau(int CoutEau);
        double calculercout();
};
#endif //RELEASE_EAU_H
