#pragma once
#include <string>
#include "ArmyUnit.h"
using namespace std;

// Parent class for all soldiers
class Soldier : public ArmyUnit {
protected:
    int damage;
    string name;

public:
    Soldier(string na, int da);
    virtual ~Soldier();         

    virtual void Attack();  
    virtual void Defend();    
    virtual void SpecialAbility(); 
    virtual void Report();         
    void executeCommand(int command) override;  
};
