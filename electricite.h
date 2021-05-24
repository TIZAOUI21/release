#pragma once
#include <string>
#include "cout.h"

class Electricite : public cout {

private:
   int VoltageMachine;
   int AmpirageMchine;
   int CoutElectricite;
public:
        Electricite(std::string nomMachine, int VoltageMachine,int AmpirageMchine,int CoutElectricite);
        int getVoltageMachine();
       ~Electricite();
        void setVoltageMachine(int VoltageMachine);
        int getAmpirageMachine();
        void setAmpirageMachine(int AmpirageMchine);
        int getCoutElectricite();
        void setCoutElectricite(int CoutElectricite);
         double calculercout();
};

