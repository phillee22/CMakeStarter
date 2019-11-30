//
//
//
#pragma once

#include "global.h"
#include "DoubleLink.h"
#include "DoubleList.h"
#include "IList.h"
#include "Link.h"
#include "SingleList.h"

class ListManager
{
private:
	LinkType _type;
	Link* head;
	IList* _list;

public:
	ListManager(LinkType);
	void CreateList(int);
	void Free3Links();
	void ReverseList();
	void WalkList();
};

