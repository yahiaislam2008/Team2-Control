#pragma once
#include "Soldier.h"
#include "ArmyUnit.h"
class Knight : public Soldier {
public:
    Knight();

    void Attack() override;
    void Defend() override;
    void SpecialAbility() override;
    void Report() override;
};
