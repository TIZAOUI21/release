#ifndef RELEASE_ELECTRICITE_H
#define RELEASE_ELECTRICITE_H
#include <string>
#include "cout.h"
class Electricite : public cout {
private:
   int VoltageMachine;
   int AmpirageMchine;
   int CoutElectricite;
public:
        Electricite(int VoltageMachine,int AmpirageMchine,int CoutElectricite);
        int getVoltageMachine();
        void setVoltageMachine(int VoltageMachine);
        int getAmpirageMachine();
        void setAmpirageMachine(int AmpirageMchine);
        int getCoutElectricite();
        void setCoutElectricite(int CoutElectricite);
};


#endif //RELEASE_ELECTRICITE_H
