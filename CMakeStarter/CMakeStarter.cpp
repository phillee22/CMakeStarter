//
// CMakeStarter.cpp : Defines the entry point for the application.
//

#include "Box.h"
#include "CMakeStarter.h"

using namespace std;


int main()
{
	int i = 5;
	cout << "size of i: " << sizeof(i) << endl;
	cout << "size of float: " << sizeof(float) << endl;
	cout << "size of double: " << sizeof(double) << endl;

	Box b(i, 5.0, 5.0);

	//Box c = new Box(10.0, 10.0, 10.0);

	cout << "Hello CMake." << endl;
	return 0;
}
