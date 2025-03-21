#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <string>
using namespace std;

class vehicle {
public:
    string name;
    vehicle(string name);
    virtual void move() = 0;
    virtual void fire() = 0;
  
};

class Tank : public vehicle {
public:
    Tank();
    void move() override;
    void fire() override;
  
};


class Helicopter : public vehicle {
public:
    Helicopter();
    void fire() override;
    void move() override;
   
};


class Bradley : public vehicle {
public:
    Bradley();
    void move() override;
    void fire() override;
};

#endif 