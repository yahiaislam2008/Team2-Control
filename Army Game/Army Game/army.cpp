#include "Army.h"
#include <iostream>

void Army::addUnit(ArmyUnit* unit) {
    units.push_back(unit);
}

void Army::executeCommand(int command) {
    for (auto unit : units) {
        unit->executeCommand(command);
    }
}

void Army::reportAll() {
    for (auto unit : units) {
        unit->Report();
    }
}

Army::~Army() {
    for (auto unit : units) {
        delete unit; 
    }
}
