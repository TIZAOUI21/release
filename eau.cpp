using namespace std;
#include "eau.h"
#include <string>




int eau::getDebitMachine(){
    return this->DebitMachine;
}
int eau::setDebitMachine(float DebitMachine) {
    return this->DebitMachine=DebitMachine;
}
int eau::getCoutEau(){
    return this->CoutEau;
}
int eau::setgetCoutEau(int CoutEau) {
    return this->CoutEau=CoutEau;
}

