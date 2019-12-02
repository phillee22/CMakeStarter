//
//
//
#include <iostream>
#include "ListManager.h"

using namespace std;


ListManager::ListManager(LinkType type)
{
	_type = type;
	_list = 0;
}


void ListManager::CreateList(int ListSize)
{
	if (_type == Single)
	{
		_list = new SingleList();
	}
	else {
		_list = new DoubleList();
	}
	_list->CreateList(ListSize);
}


void ListManager::Free3Links()
{
	_list->Free3Links(); 99;
}


void ListManager::ReverseList()
{
	_list->ReverseList();
}


void ListManager::WalkList()
{
	_list->WalkList();
}