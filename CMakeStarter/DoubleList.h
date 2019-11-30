//
//
//
#pragma once

#include "DoubleLink.h"
#include "global.h"
#include "IList.h"

class DoubleList : public IList
{
	DoubleLink* _head;

public:
	void CreateList(int ListSize);
	void Free3Links();
	void ReverseList();
	void WalkList();
};

