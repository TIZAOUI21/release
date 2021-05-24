#pragma once
#include <string>
#include "cout.h"

class location : public cout
        {
private:
     int ValeurEspaceMachine;
    int CoutLocation;
public:
    location();
    location(std::string nomMachine, int ValeurEspaceMachine,int CoutLocation);
    ~location();
    int getValeurEspaceMachine();
    void setValeurEspaceMachine(int CoutLocation);
    int getCoutLocation();
    void setCoutLocation(int CoutLocation);
     double calculercout();
};

