#pragma once
#include<string>
#include<iostream>

using namespace std;

class School
{
public:
	School(string name, int student) :name(name), StudentThisYear(student),StudentNextYear(student) {}
	string name;
	float StudentThisYear;
	float StudentNextYear;
	void admissions(float number);
	bool dropouts(float number);
	void transfer(float number, School& school);
	friend ostream& operator <<(ostream&, School&);
};

class PublicSchool :public School
{
	public:
	PublicSchool(string name, float student) :School(name, student) {}
	void apply_growth();
	bool dropouts(float number);
	void transfer(float number, School& school);
	float growing_rate = 0.05;

};

class PrivateSchool :public School
{
public:

	PrivateSchool(string name, float student) :School(name, student){}
	bool dropouts(float number);
	void transfer(float number, School& school);
	int drop = 0;
};
