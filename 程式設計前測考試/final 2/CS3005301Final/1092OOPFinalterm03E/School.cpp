#include"School.h"

void School::admissions(float student)
{
	StudentThisYear += (int)student;
}
bool School::dropouts(float student)
{
	if (student <= StudentThisYear&&student>=0)
	{
		StudentThisYear -= (int)student;
		return 1;
	}
	cout << "ERROR" << endl;
	return 0;
}
void School::transfer(float number, School& school)
{
	if (dropouts(number))
	{
		school.admissions(number);
	}
}
ostream& operator <<(ostream& ostr, School& school)
{
	ostr << school.name << "\t" << school.StudentThisYear << "\t" << school.StudentNextYear;
	return ostr;
}

bool PublicSchool::dropouts(float number)
{
	if (number <= StudentThisYear&&number>=0)
	{
		StudentThisYear -= number;
		if (number > 100)
		{
			StudentNextYear *= 0.95;
			StudentNextYear = (int)StudentNextYear;
		}
		return 1;
	}
	cout << "ERROR" << endl;

	return 0;
}
void PublicSchool::apply_growth()
{
	StudentNextYear = StudentNextYear + StudentNextYear*growing_rate;
	StudentNextYear = (int)StudentNextYear;
}
void PublicSchool::transfer(float number, School& school)
{
	if (dropouts(number))
	{
		school.admissions(number);
	}
}

bool PrivateSchool::dropouts(float number)
{
	if (number <= StudentThisYear && number >= 0)
	{
		StudentThisYear -= number;
		drop++;
		if (drop > 1)
		{
			StudentNextYear -= 100;
		}
		return 1;
	}
	cout << "ERROR" << endl;

	return 0;
}
void PrivateSchool::transfer(float number, School& school)
{
	if (dropouts(number))
	{
		school.admissions(number);
	}
}