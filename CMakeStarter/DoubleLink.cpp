//
//
//
#include "DoubleLink.h"
#include "Link.h"

using namespace std;


DoubleLink::DoubleLink()
{
	next = 0;
	prev = 0;
	name = "foo";
}

DoubleLink::DoubleLink(char* Name) : Link(Name)
{
	next = 0;
	prev = 0;
	name = Name;
}

DoubleLink::~DoubleLink()
{
	if (0 != name)
	{
		free(name);
	}
}