#pragma once
#include <string>

class cout {
    private:
    std::string nomMachine;
    public:
     cout(std::string nomMachine);
     virtual ~cout();
     std::string getNom();
     void setNom(std::string nomMachine);
     virtual double calculercout()=0 ;
};

