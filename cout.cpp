using namespace std;

#include "cout.h"
#include <string>


    cout::cout(std::string nomMachine){
    this->nomMachine= nomMachine;
}
     cout::~cout(){
}
    std::string cout::getNom() {
        return this->nomMachine;
    }
double cout::calculerCout(int  nombreJour) {
        return 0.0;
    }
void cout::afficherCout(){
    std::cout << this->nomMachine <<":"<<this->calculerCout()<<"$"<<std::endl;
    }





