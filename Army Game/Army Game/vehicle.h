#ifndef VEHICLE_H
#define VEHICLE_H
#include "ArmyUnit.h"

class Vehicle : public ArmyUnit {
    public:
        Vehicle(string name);
        void executeCommand(int command) override;  
        void Report() override;
        virtual void move() = 0;  
        virtual void fire() = 0;
        virtual ~Vehicle() {}
    };
    

class Tank : public Vehicle {
public:
    Tank();
    void move() override;
    void fire() override;
    ~Tank() override {}
};

class Helicopter : public Vehicle {
public:
    Helicopter();
    void fire() override;
    void move() override;
    ~Helicopter() override {}
};

class Bradley : public Vehicle {
public:
    Bradley();
    void move() override;
    void fire() override;
    ~Bradley() override {}
};

#endif
