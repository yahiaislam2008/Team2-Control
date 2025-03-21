#include "Defender.h"
#include <iostream>
using namespace std;

Defender::Defender() : Soldier("Defender", 20) {}

void Defender::Defend() {
    cout << name << " is defending and absorbing attacks!\n";
}

void Defender::SpecialAbility() {
    cout << "Special Ability -> Defender strengthens the army’s defense!\n";
}

void Defender::Report() {
    cout << name << " is standing by.\n";
    SpecialAbility();
}
