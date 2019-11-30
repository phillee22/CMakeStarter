//
//
//
#include "SingleList.h"

using namespace std;

SingleList::SingleList()
{
	_head = 0;
}

void SingleList::CreateList(int ListSize)
{
	const int BUFF_SIZE = 3;
#ifdef W_CHAR
	wchar_t* s = new wchar_t((wchar_t)"foo");
	Link* list = new Link(s);
#else
	_head = new Link(_itoa(0, new char[BUFF_SIZE], BUFF_SIZE));
#endif
	Link* curr = _head;

	for (int i = 1; i < 10; i++)
	{
		char* string = new char[BUFF_SIZE];
		curr->next = new Link(_itoa(i, string, BUFF_SIZE));
		curr = curr->next;
	}
}

void SingleList::Free3Links()
{
	Link* curr = 0;
	int i = 0;

	while (0 != _head && i < 3)
	{
		curr = _head->next;
		free(_head);
		_head = curr;

		i++;
	}
}

void SingleList::ReverseList()
{
	Link* curr = 0;
	Link* temp = _head;

	while (0 != temp)
	{
		temp = _head->next;
		_head->next = curr;
		curr = _head;
		_head = temp;
	}

	_head = curr;
}

void SingleList::WalkList()
{
	Link* temp = _head;
	while (0 != temp)
	{
		std::cout << "Link.name " << temp->name << endl;
		temp = temp->next;
	}
}