












#include "main.h"

vehicle::vehicle(string name) : name(name) {}

Tank::Tank() : vehicle("Tank") {}

void Tank::move() {
    cout << "Tank is moving" << endl;
}

void Tank::fire() {
    cout << "Tank is firing" << endl;
}

Helicopter::Helicopter() : vehicle("Helicopter") {}

void Helicopter::fire() {
    cout << "Helicopter is firing" << endl;
}

void Helicopter::move() {
    cout << "Helicopter is moving" << endl;
}

Bradley::Bradley() : vehicle("Bradley") {}

void Bradley::move() {
    cout << "Bradley is moving" << endl;
}

void Bradley::fire() {
    cout << "Bradley is firing" << endl;
}

#include "main.h"

int main() {
    Tank t;
    Helicopter h;
    Bradley b;

    t.fire();
    t.move();

    h.fire();
    h.move();

    b.fire();
    b.move();
   

    return 0;
}