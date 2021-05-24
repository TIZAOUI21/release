using namespace std;
#include "eau.h"
#include <string>



eau::eau(std::string nomMachine, float DebitMachine, int CoutEau) :cout(nomMachine){
this->DebitMachine=DebitMachine;
this->CoutEau=CoutEau;
}
eau::~eau(){
}
float eau::getDebitMachine(){
    return this->DebitMachine;
}
void eau::setDebitMachine(float DebitMachine) {
     this->DebitMachine=DebitMachine;
}
int eau::getCoutEau(){
    return this->CoutEau;
}
void eau::setCoutEau(int CoutEau) {
     this->CoutEau=CoutEau;
}
double eau::calculercout(){
    return 0.0;
    }

