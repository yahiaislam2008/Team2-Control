#include "Wizard.h"
#include <iostream>
using namespace std;

Wizard::Wizard() : Soldier("Wizard", 30) {}

void Wizard::Attack() {
    cout << name << " casts fireballs!\n";
}

void Wizard::Defend() {
    cout << name << " conjures a magical shield!\n";
}

void Wizard::SpecialAbility() {
    cout << "Special Ability -> Wizard adapts the battlefield using magic spells!\n";
}

void Wizard::Report() {
    cout << name << " is standing by.\n";
    SpecialAbility();
}
