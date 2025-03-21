#pragma once
#include "Soldier.h"
#include "ArmyUnit.h"
class Defender : public Soldier {
public:
    Defender();

    void Defend() override;
    void SpecialAbility() override;
    void Report() override;
};
