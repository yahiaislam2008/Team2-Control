#pragma once
#include "Soldier.h"
#include "ArmyUnit.h"
class Archer : public Soldier {
public:
    Archer(); 

    void Attack() override;           
    void Defend() override;           
    void SpecialAbility() override;  
    void Report() override;           
};
