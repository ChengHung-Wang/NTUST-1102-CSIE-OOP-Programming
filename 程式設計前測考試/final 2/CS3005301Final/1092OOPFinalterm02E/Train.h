#pragma once
#include<iostream>
#include<string>
using namespace std;

class Carriage
{
public:
	int getPassengerNum();
	string getName();
	void printPassenger();
private:
	string name;
	int passengerNum;
	string* passengerName;

};

class Train
{
public:

	Carriage* first;
	void pushCarriage(string name, int passengerNum, string* passengerName);
	void checkPassenger(string name);
	bool deleteCarriage(string name);
	Carriage* getCarriage(std::string name);
	Train();

};
