#ifndef RELEASE_COUT_H
#define RELEASE_COUT_H
#include <string>

class cout {
    string nomMachine;
public:
    cout(string nomMachine);
    string getNom();
    void setNom(string nomMachine);
};
#endif //RELEASE_COUT_H
