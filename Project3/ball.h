#ifndef Ball_H
#define Ball_H
#include <string>
class Ball
{
public:

	Ball();
	std::string& name();
	void name(std::string &name);
	void name(const char *name);
	std::string _name; // ¦WºÙ
};
#endif