#pragma once
#include "Soldier.h"
class Defender :public Soldier
{
public:
	virtual void SpecialAbility();
	virtual void Report();
	virtual void Defend();
	Defender();
private:

};
