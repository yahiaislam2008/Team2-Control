#include "Wizard.h"
#include <iostream>
using namespace std;

void Wizard::SpecialAbility()
{
	cout << "Special Ability -> adapt the field using magic spells!\n";
}

void Wizard::Report()
{
	cout << name << " is standing by.\n";
	Wizard::SpecialAbility();
}

void Wizard::Attack()
{
	cout << name << " casts fire balls\n";
}

void Wizard::Defend()
{
	cout << name << " getting a magical shield!\n";
}

Wizard::Wizard() : Soldier("Wizard" , 30)
{
}
