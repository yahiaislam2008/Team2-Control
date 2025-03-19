#include "Archer.h"
#include <iostream>
using namespace std;

void Archer::SpecialAbility()
{
	cout << "Special Ability -> Archer shoots fire arrows!\n";
}

void Archer::Report()
{
	cout << name << " is standing by.\n";
	Archer::SpecialAbility();
}

void Archer::Attack()
{
	cout << name << " shooting arrow!\n";
}

void Archer::Defend()
{
	cout << name << " dodges and finds cover!\n";
}


Archer::Archer() : Soldier("Archer", 50)
{
}
