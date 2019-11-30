//
//
//
#pragma once

#include "global.h"

class IList
{
private:

public:

	virtual ~IList();
	virtual void CreateList(int) = 0;
	virtual void Free3Links() = 0;
	virtual void ReverseList() = 0;
	virtual void WalkList() = 0;

};