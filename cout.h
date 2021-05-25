#pragma once
#include <string>
#include <iostream>

class cout {
    private:
        std::string nomMachine;
    public:
     cout(std::string nomMachine);
     virtual ~cout();
     std::string getNom();
//     void setNom(std::string nomMachine);

    virtual double calculerCout(int nombreJour);
    virtual void afficherCout(){

    }



};

