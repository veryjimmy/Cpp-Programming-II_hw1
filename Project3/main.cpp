#include <iostream>
#include <string>
#include "Box.h"

using namespace std;

int main()
{
	Box firstBox(19.0, 11.0, 5.0, "FirstBox");
	Box secondBox(17.0, 10.0, 8.0, "SecondBox");
	
	cout << "Volume of " << firstBox.name() << " = " << firstBox.volume() << endl;
	cout << "Volume of " << secondBox.name() << " = " << secondBox.volume() << endl;
	
	cout << firstBox.name()
		<< " is "
		<< (firstBox.compareVolume(secondBox) >= 0 ? "" : "not ")
		<< "greater than "
		<< secondBox.name()
		<< endl;
	
	system("pause");
	return 0;
}
