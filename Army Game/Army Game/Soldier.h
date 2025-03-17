#pragma once
#include "string"
#include "ArmyUnit.h"
using namespace std;

//parent class
class Soldier : public ArmyUnit
{
protected:
	int damage;
	string name;
public:
	virtual void Attack();
	virtual void Defend();
	virtual void SpecialAbility() = 0;
	virtual void Report();
	void executeCommand(int command);

	Soldier(string na, int da);
	~Soldier();
};