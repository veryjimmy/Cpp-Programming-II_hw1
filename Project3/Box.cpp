#include <iostream>
#include <string>
#include "Box.h"

using namespace std;

Box::Box()
{
	_radius = 0.0;
	_radius1 = 0.0;
	_radius2 = 0.0;
	_name = "noname ball";
	cout << "Box constructor called" << endl;
}
Box::Box(double radius, double radius1, double radius2, const char *name)
{
	_radius = radius;
	_radius1 = radius1;
	_radius2 = radius2;
	_name = name;
	cout << "Box constructor called" << endl;
}
Box::Box(double radius, double radius1, double radius2, string &name)
{
	_radius = radius;
	_radius1 = radius1;
	_radius2 = radius2;
	_name = name;
	cout << "Box constructor called" << endl;
}
/////////////////////////////////////////////////
string& Box::name()
{
	return _name;
}
/////////////////////////////////////////////////

double Box::volume()
{
	return (_radius * _radius1 * _radius2);
}

/////////////////////////////////////////////////

double Box::compareVolume(Box& secondBox)
{
	double v1 = this->volume();
	double v2 = secondBox.volume();
	return( v1 - v2);
}

/////////////////////////////////////////////////
double Box::radius()
{
	return _radius;
}
double Box::radius1()
{
	return _radius1;
}
double Box::radius2()
{
	return _radius2;
}
void Box::radius(double radius)
{
	_radius = radius;
}
void Box::radius1(double radius1)
{
	_radius1 = radius1;
}
void Box::radius2(double radius2)
{
	_radius2 = radius2;
}
void Box::name(string &name)
{
	_name = name;
}

void Box::name(const char *name)
{
	_name = name;
}
