#pragma once
#include <string>
#include <iostream>
#include "cout.h"

class cout {

    std::string nomMachine="";
public:
     cout(std::string nomMachine);
     virtual ~cout();
      std::string getNom();
     void getnom(std::string nomMachine);
    virtual double calculerCout(int nombreJour)=0;
    virtual void afficherCout()=0;
};

