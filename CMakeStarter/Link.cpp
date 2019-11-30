#include "Link.h"

Link::Link()
{
	next = 0;
	name = (char*)"base";
}

Link::Link(char* Name)
{
	next = 0;
	name = Name;
}

Link::~Link()
{
	if (0 != name)
	{
		free(name);
	}
}