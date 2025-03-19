#include <iostream>
#include "Army.h"
#include "Archer.h"
#include "Soldier.h"

using namespace std;
//Testinggg
int main() {
    Army myArmy;

    // Create Soldiers
    ArmyUnit* archer1 = new Archer();
    ArmyUnit* soldier1 = new Soldier("Aurther", 100); 
   
    myArmy.addUnit(archer1);
    myArmy.addUnit(soldier1);

    
    cout << "Executing Attack Command (1)..." << endl;
    myArmy.executeCommand(1);  

    cout << "\nExecuting Defense Command (2)..." << endl;
    myArmy.executeCommand(2);  

    cout << "\nArmy Report:" << endl;
    myArmy.reportAll();  

    return 0;  
}