#ifndef SHIP_H
#define SHIP_H

#include <string>
#include <iostream>
using namespace std;

class Ship {
protected:
    string name;
    string year;
public:
    Ship(string n, string y) : name(n), year(y) {}
    string getName() { return name; }
    string getYear() { return year; }
    void setName(string n) { name = n; }
    void setYear(string y) { year = y; }
    virtual void print() {
        cout << "Name: " << name << endl;
        cout << "Year: " << year << endl;
    }
};

#endif