#pragma once
#include "Soldier.h"
#include "ArmyUnit.h"

class Wizard : public Soldier {
public:
    Wizard();

    void Attack() override;
    void Defend() override;
    void SpecialAbility() override;
    void Report() override;
};
