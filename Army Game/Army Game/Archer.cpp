#include "Archer.h"
#include <iostream>
using namespace std;

Archer::Archer() : Soldier("Archer", 50) {}

void Archer::Attack() {
    cout << name << " shoots an arrow!\n";
}

void Archer::Defend() {
    cout << name << " dodges and finds cover!\n";
}

void Archer::SpecialAbility() {
    cout << "Special Ability -> Archer shoots fire arrows!\n";
}

void Archer::Report() {
    cout << name << " is standing by.\n";
    SpecialAbility();  
}
