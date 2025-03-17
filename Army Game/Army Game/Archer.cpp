#include "Archer.h"
#include <iostream>
using namespace std;

void Archer::SpecialAbility()
{
	cout << "Archer shoots fire arrows!\n";
}

void Archer::Report()
{
	cout << name << " is standing by.\n";
}

Archer::Archer() : Soldier("Archer", 50)
{
}
