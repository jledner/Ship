#ifndef CRUISESHIP_H
#define CRUISESHIP_H

#include "Ship.h"

class CruiseShip : public Ship {
private:
    int maxPassengers;
public:
    CruiseShip(string n, string y, int m) : Ship(n, y), maxPassengers(m) {}
    int getMaxPassengers() { return maxPassengers; }
    void setMaxPassengers(int m) { maxPassengers = m; }
    void print() {
        cout << "Name: " << name << endl;
        cout << "Max Passengers: " << maxPassengers << endl;
    }
};

#endif