//
//
//
#pragma once

#include "global.h"
#include "IList.h"
#include "Link.h"

class SingleList : public IList
{
	Link* _head;

public:
	SingleList();
	void CreateList(int ListSize);
	void Free3Links();
	void ReverseList();
	void WalkList();
};

