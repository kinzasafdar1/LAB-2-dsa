#include <iostream>
using namespace std;

// Shape class with pure virtual function
class Shape 
{
public:
	virtual double area() = 0;
};

// Circle class
class Circle : public Shape 
{
	double radius;
public:
	Circle(double r) 
	{ 
		radius = r;
	}
	double area() 
	{
		return 3.14 * radius * radius;
	}
};

// Rectangle class
class Rectangle : public Shape 
{
	double length, width;
public:
	Rectangle(double l, double w) 
	{
		length = l; width = w;
	}
	double area() 
	{
		return length * width;
	}
};

int main() 
{
	Circle c(5);
	Rectangle r(4, 6);

	cout << "Circle area: " << c.area() << endl;
	cout << "Rectangle area: " << r.area() << endl;

	system("pause");
	return 0;
}