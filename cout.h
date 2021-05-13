#ifndef RELEASE_COUT_H
#define RELEASE_COUT_H
#include <string>

class Cout {
    string nomMachine;
public:
    Cout(string nomMachine);
    string getNom();
    void setNom(string nomMachine);
};
#endif //RELEASE_COUT_H
