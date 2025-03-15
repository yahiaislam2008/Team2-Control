#include "Soldier.h"
#include <iostream>
using namespace std;
//impleminting class 

void Soldier::Attack()
{
	cout << name << " Attacking\n";
}

void Soldier::Defend()
{
	cout << name << " Defending\n";
}


void Soldier::Report()
{
	cout << "name: " << name << "\ndamage value: " << damage << "\n";
}

//commands that will be taken from the Army
void Soldier::executeCommand(int command)
{
	if (command == 1) Attack();
	else if (command == 2) Defend();
	else if (command == 3) Report();
}

Soldier::Soldier(string na, int da) :name(na), damage(da)
{
}

Soldier::~Soldier()
{
}



