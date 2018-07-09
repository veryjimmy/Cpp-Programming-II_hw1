#include <iostream>
#include <string>
#include "Ball.h"

using namespace std;

Ball::Ball()
{
	_name = "noname ball";
}

string& Ball::name()
{
	return _name;
}

void Ball::name(string &name)
{
	_name = name;
}

void Ball::name(const char *name)
{
	_name = name;
}
