//
// CMakeStarter.cpp : Defines the entry point for the application.
//

#include "CMakeStarter.h"

using namespace std;


int main()
{
	cout << "size of char: " << sizeof(wchar_t) << endl;

#if true
	cout << "size of int: " << sizeof(int) << endl;
	cout << "size of float: " << sizeof(float) << endl;
	cout << "size of double: " << sizeof(double) << endl;
	cout << "size of Link: " << sizeof(Link) << endl;
#endif

	Box b(5.0, 5.0, 5.0);
	cout << "b.Volume:  " << b.GetVolume() << endl;

	cout << "Create the list and walk it." << endl;
	ListManager mgr(Single);
	mgr.CreateList(10);
	mgr.WalkList();

	cout << "Reverse the list and walk it." << endl;
	mgr.ReverseList();
	mgr.WalkList();

	cout << "Free 3 links and walk it." << endl;
	mgr.Free3Links();
	mgr.WalkList();
	
	cout << "****************" << endl;
	cout << "**** Double ****" << endl;
	cout << "****************" << endl;

	cout << "Create the list and walk it." << endl;
	ListManager dblmgr(Double);
	dblmgr.CreateList(10);
	dblmgr.WalkList();

	cout << "Reverse the list and walk it." << endl;
	dblmgr.ReverseList();
	dblmgr.WalkList();

	cout << "Free 3 links and walk it." << endl;
	dblmgr.Free3Links();
	dblmgr.WalkList();

	//Box c = new Box(10.0, 10.0, 10.0);

	cout << "Goodnight!  -CMake." << endl;
	return 0;
}
