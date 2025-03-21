#pragma once
#include <vector>
#include "ArmyUnit.h"

class Army {
private:
    vector<ArmyUnit*> units; 

public:
    void addUnit(ArmyUnit* unit); 
    void executeCommand(int command); 
    void reportAll();  
    bool isEmpty() const;  
    ~Army();  
};
