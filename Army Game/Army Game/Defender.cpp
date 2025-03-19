#include "Defender.h"
#include <iostream>
using namespace std;

void Defender::SpecialAbility()
{
	cout << "Defending the Army" << "\n";
}

void Defender::Report()
{
	cout << name << " is standing by.\n";
	Defender::SpecialAbility();
}

void Defender::Defend()
{
	cout << name << " Defending and absorbing attacks\n";
}

Defender::Defender() :Soldier("Guardian" , 20)
{
}
