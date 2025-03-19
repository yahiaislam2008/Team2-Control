#pragma once
#include "Soldier.h"

class Knight : public Soldier
{
public:
	virtual void SpecialAbility();
	virtual void Report();
	virtual void Attack();
	virtual void Defend();
	Knight();

private:

};

