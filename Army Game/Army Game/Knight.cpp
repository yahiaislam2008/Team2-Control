#include "Knight.h"
#include <iostream>
using namespace std;
void Knight::SpecialAbility()
{
	cout << "Special Ability -> The Knight flanks through army!\n";
}

void Knight::Report()
{
	cout << name << " is standing by.\n";
	Knight::SpecialAbility();
}

void Knight::Attack()
{
	cout << name << " Chargers forward\n";
}

void Knight::Defend()
{
	cout << name << " raising the shield \n";
}

Knight::Knight() :Soldier("Knight", 80)
{
}
