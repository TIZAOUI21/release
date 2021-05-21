#ifndef RELEASE_LOCATION_H
#define RELEASE_LOCATION_H
#include <string>
#include "cout.h"

class Location : public cout {
private:
    int ValeurEspaceMachine;
    int CoutLocation;
public:
    Location(int ValeurEspaceMachine,int CoutLocation);
    int getValeurEspaceMachine();
    void setValeurEspaceMachine(int CoutLocation);
    int getCoutLocation();
    void setCoutLocation(int CoutLocation);
};

#endif //RELEASE_LOCATION_H
