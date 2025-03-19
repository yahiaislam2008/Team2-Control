#pragma once
#include "Soldier.h"
class Archer : public Soldier
{
public:
	virtual void SpecialAbility();
	virtual void Report();
	virtual void Attack();
	virtual void Defend();
	Archer();

private:

};


