#ifndef Box_H
#define Box_H
#include <string>
class Box
{
public:
	Box();
	Box(double radius, double radius1, double radius2, const char *name);
	Box(double radius, double radius1, double radius2, std::string &name);

	double radius(), radius1(), radius2();
	std::string& name();
	void radius(double radius);
	void radius1(double radius1);
	void radius2(double radius2);
	void name(std::string &name);
	void name(const char *name);

	double volume();
	/////////////////////////////////////////////////

	double compareVolume(Box& secondBox);

	/////////////////////////////////////////////////
	double _radius; // ªø
	double _radius1; // ¼e
	double _radius2; // °ª
	std::string _name; // ¦WºÙ
};
#endif