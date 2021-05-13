using namespace std;
#include "cout.h"
#include <string>

cout::Cout(string nomMachine) {this->nomMachine=nomMachine;}
string cout::getNom() {return this->nomMachine;}
void cout::setNom(string nomMachine){
    this->nomMachine;}