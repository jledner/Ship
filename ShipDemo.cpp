#include "CruiseShip.h"
#include "CargoShip.h"

int main() {
    Ship* ptrs[] = { new Ship("Titanic", "1912"), new CruiseShip("Voyager of the Seas", "2023", 346), new CargoShip("Suez", "2019", 5345) };
    for (int i = 0; i < 3; i++) {
        ptrs[i]->print();
    }
    return 0;
}