#include "Army.h"
#include "Archer.h"
#include "Knight.h"
#include "Wizard.h"
#include "Defender.h"
#include "Vehicle.h"
#include <iostream>
using namespace std;

int displayMenu() {
    cout << "\033[34m\n====== Army Management System (Team 2) ======\033[0m\n";  
    cout << "\033[32m1. Add a Soldier\033[0m\n";   
    cout << "\033[32m2. Add a Vehicle\033[0m\n";   
    cout << "\033[33m3. Issue Command to Army\033[0m\n";  
    cout << "\033[35m4. Display Army Report\033[0m\n";  
    cout << "\033[31m5. Exit\033[0m\n";  
    cout << "Enter your choice: ";
    
    
    int choice;
    cin >> choice;

    while (cin.fail() || choice < 1 || choice > 5) {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Invalid input! Please enter a number between 1 and 5: ";
        cin >> choice;
    }
    return choice;
}


ArmyUnit* createSoldier() {
    cout << "\n--- Choose a Soldier Type ---\n";
    cout << "1. Archer\n";
    cout << "2. Knight\n";
    cout << "3. Wizard\n";
    cout << "4. Defender\n";
    cout << "Enter your choice: ";
    
    int choice;
    cin >> choice;

    while (cin.fail() || choice < 1 || choice > 4) {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Invalid input! Please enter a number between 1 and 4: ";
        cin >> choice;
    }

    if (choice == 1) return new Archer();
    else if (choice == 2) return new Knight();
    else if (choice == 3) return new Wizard();
    else return new Defender(); 
}


ArmyUnit* createVehicle() {
    cout << "\n--- Choose a Vehicle Type ---\n";
    cout << "1. Tank\n";
    cout << "2. Helicopter\n";
    cout << "3. Bradley\n";
    cout << "Enter your choice: ";

    int choice;
    cin >> choice;

    while (cin.fail() || choice < 1 || choice > 3) {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Invalid input! Please enter a number between 1 and 3: ";
        cin >> choice;
    }

    if (choice == 1) return new Tank();
    else if (choice == 2) return new Helicopter();
    else return new Bradley();
}

int main() {
    Army myArmy;

    while (true) {
        int choice = displayMenu();

        if (choice == 1) {
            ArmyUnit* soldier = createSoldier();
            myArmy.addUnit(soldier);
            cout << "Soldier added to the army.\n";
        } 
        else if (choice == 2) {
            ArmyUnit* vehicle = createVehicle();
            myArmy.addUnit(vehicle);
            cout << "Vehicle added to the army.\n";
        } 
        else if (choice == 3) {
            if (myArmy.isEmpty()) {  
                cout << "The army is empty! Add units first.\n";
                continue;
            }

            cout << "\n--- Issue Command ---\n";
            cout << "1. Attack\n";
            cout << "2. Defend\n";
            cout << "3. Report\n";
            cout << "Enter command: ";

            int command;
            cin >> command;

            while (cin.fail() || command < 1 || command > 3) {
                cin.clear();
                cin.ignore(10000, '\n');
                cout << "Invalid input! Please enter a number between 1 and 3: ";
                cin >> command;
            }

            myArmy.executeCommand(command);
        } 
        else if (choice == 4) {
            if (myArmy.isEmpty()) {
                cout << "The army is empty! Add units first.\n";
            } else {
                cout << "\n--- Army Report ---\n";
                myArmy.reportAll();
            }
        } 
        else if (choice == 5) {
            cout << "Exiting the game. Goodbye!\n";
            return 0;
        }
    }
}
