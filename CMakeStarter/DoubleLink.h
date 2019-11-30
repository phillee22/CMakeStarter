//
//
//

#pragma once

#include "Link.h"
#include "global.h"


class DoubleLink : public Link
{

public:
	DoubleLink* next;
	DoubleLink* prev;
	char* name;

	DoubleLink();
	DoubleLink(char*);
	~DoubleLink();
};
