#pragma once
#include <string>

using namespace std;

class ArmyUnit {
protected:
    string name;
    int damage;

public:
    ArmyUnit(string na, int da); 
    virtual void executeCommand(int command) = 0;
    virtual void Report() = 0;
    virtual ~ArmyUnit();  
};
