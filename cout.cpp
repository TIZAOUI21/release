using namespace std;

#include "cout.h"
#include "Location.h"
#include "electricite.h"
#include"eau.h";
#include <string>


    cout::cout(std::string nomMachine){
    this->nomMachine= nomMachine;
//    cout* ptr_cout[250];
//    ptr_cout =new Location (int ValeurEspaceMachine,int CoutLocation);
//    ptr_cout =new Electricite(int VoltageMachine,int AmpirageMchine,int CoutElectricite);
//    ptr_cout +new eau(float DebitMachine, int CoutEau);
//     delete [] ptr_cout;
}
     cout::~cout(){
}
    std::string cout::getNom() {
        return this->nomMachine;
    }
    void cout::setNom(std::string nomMachine){
    this->nomMachine=nomMachine;}
     double cout::calculercout(){
    return 0.0;
}


