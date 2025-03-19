#pragma once
#include "Soldier.h"

class Wizard : public Soldier
{
public:
	virtual void SpecialAbility();
	virtual void Report();
	virtual void Attack();
	virtual void Defend();
	Wizard();
	

private:

};

