#ifndef RELEASE_LOCATION_H
#define RELEASE_LOCATION_H
#include <string>

class Location {
private:
    int ValeurEspaceMachine;
    int CoutLocation;
public:
    Location(int ValeurEspaceMachine,int CoutLocation);
    int getValeurEspaceMachine();
    int setValeurEspaceMachine(int CoutLocation);
    int getCoutLocation();
    int setCoutLocation(int CoutLocation);
};

#endif //RELEASE_LOCATION_H
