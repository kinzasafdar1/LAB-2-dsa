#include <iostream>
using namespace std;

// Abstract class
class Employee 
{
public:
	virtual double calculateSalary() = 0;
};

// Full-time employee 
class FullTimeEmployee : public Employee 
{
	double salary;
public:
	FullTimeEmployee(double s) 
	{
		salary = s;
	}
	double calculateSalary()
	{
		return salary; 
	}
};

// Part-time employee 
class PartTimeEmployee : public Employee 
{
	double rate, hours;
public:
	PartTimeEmployee(double r, double h) 
	{
		rate = r;
		hours = h;
	}
	double calculateSalary() 
	{ 
		return rate * hours; 
	}
};

int main() 
{
	// Create employees 
	FullTimeEmployee FT(5000.0);
	PartTimeEmployee PT(20.0, 80.0);

	cout << "Full-time employee salary is: $" << FT.calculateSalary() << endl;
	cout << "Part-time employee salary is: $" << PT.calculateSalary() << endl;

	system("pause");
	return 0;
}