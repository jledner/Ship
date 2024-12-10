#ifndef CARGOSHIP_H
#define CARGOSHIP_H

#include "Ship.h"

class CargoShip : public Ship {
private:
    int cargoCapacity;
public:
    CargoShip(string n, string y, int m) : Ship(n, y), cargoCapacity(m) {}
    int getCargoCapacity() { return cargoCapacity; }
    void setCargoCapacity(int m) { cargoCapacity = m; }
    void print() {
        cout << "Name: " << name << endl;
        cout << "Cargo Capacity: " << cargoCapacity << endl;
    }
};

#endif