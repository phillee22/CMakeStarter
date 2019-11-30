#pragma once

#include "global.h"


class Link
{

public:

	Link* next;
	char* name;

	Link();
	Link(char*);
	~Link();
};
