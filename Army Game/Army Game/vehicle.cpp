#include "Vehicle.h"
#include <iostream>
using namespace std;

Vehicle::Vehicle(string name) : ArmyUnit(name, 0) {}

void Vehicle::executeCommand(int command) {
    if (command == 1)
        move();
    else if (command == 2)
        fire();
    else
        cout << name << " is standing by.\n";
}


void Vehicle::Report() {
    cout << "Vehicle Name: " << name << " is operational.\n";
}


Tank::Tank() : Vehicle("Tank") {}
void Tank::move() { cout << "Tank is moving" << endl; }
void Tank::fire() { cout << "Tank is firing" << endl; }


Helicopter::Helicopter() : Vehicle("Helicopter") {}
void Helicopter::fire() { cout << "Helicopter is firing" << endl; }
void Helicopter::move() { cout << "Helicopter is moving" << endl; }


Bradley::Bradley() : Vehicle("Bradley") {}
void Bradley::move() { cout << "Bradley is moving" << endl; }
void Bradley::fire() { cout << "Bradley is firing" << endl; }
