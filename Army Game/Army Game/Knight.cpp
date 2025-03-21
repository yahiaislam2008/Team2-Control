#include "Knight.h"
#include <iostream>
using namespace std;

Knight::Knight() : Soldier("Knight", 80) {}

void Knight::Attack() {
    cout << name << " charges forward with a sword!\n";
}

void Knight::Defend() {
    cout << name << " raises the shield to block attacks!\n";
}

void Knight::SpecialAbility() {
    cout << "Special Ability -> The Knight flanks through the enemy army!\n";
}

void Knight::Report() {
    cout << name << " is standing by.\n";
    SpecialAbility();
}
