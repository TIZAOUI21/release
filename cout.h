#pragma once
#include <string>
#include <iostream>


class cout {

    std::string nomMachine="";
public:
     cout(std::string nomMachine);
     virtual ~cout();
    std::string  getNom();
    virtual double calculerCout(int nombreJour)=0;
    virtual void afficherCout()=0;
};

