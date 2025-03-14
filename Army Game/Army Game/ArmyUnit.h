#pragma once
using namespace std;

//Parent class fo units
class ArmyUnit
{
public:
	virtual void executeCommand(int command)=0;
	virtual void Report() = 0;
	~ArmyUnit();


};



