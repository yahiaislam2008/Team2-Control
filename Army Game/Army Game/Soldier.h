#pragma once
#include "string"
#include "ArmyUnit.h"
using namespace std;

// Parent class
class Soldier : public ArmyUnit
{
protected:
    int damage;
    string name;

public:
    virtual void Attack();
    virtual void Defend();
    virtual void SpecialAbility();  
    virtual void Report();
    void executeCommand(int command);
    Soldier(string na, int da);
    ~Soldier();
};
