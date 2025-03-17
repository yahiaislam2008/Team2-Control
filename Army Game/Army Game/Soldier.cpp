#include "Soldier.h"
#include <iostream>
using namespace std;


Soldier::Soldier(string na, int da) : ArmyUnit(na, da), name(na), damage(da) {}

 

void Soldier::Attack()
{
    cout << name << " Attacking\n";
}

void Soldier::Defend()
{
    cout << name << " Defending\n";
}

void Soldier::Report() {

    cout << "Soldier Name: " << name << "\nDamage Value: " << damage << "\n";
    
}


void Soldier::SpecialAbility()
{
    cout << "Soldier uses special ability: Shield Block!" << endl;
}


void Soldier::executeCommand(int command)
{
    if (command == 1)
        Attack();
    else if (command == 2)
        Defend();
    else if (command == 3)
        Report();
}


Soldier::~Soldier() {}
