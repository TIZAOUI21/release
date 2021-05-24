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
    void cout::setNom(std::string nomMachine){
    this->nomMachine=nomMachine;}




