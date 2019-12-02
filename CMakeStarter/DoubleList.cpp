#include "DoubleList.h"

using namespace std;

void DoubleList::CreateList(int ListSize)
{
	const int BUFF_SIZE = 3;
	_head = new DoubleLink(_itoa(0, new char[BUFF_SIZE], BUFF_SIZE));
	DoubleLink* curr = _head;
	DoubleLink* last = _head;

	for (int i = 1; i < 10; i++)
	{
		char* string = new char[BUFF_SIZE];
		curr->next = new DoubleLink(_itoa(i, string, BUFF_SIZE));
		curr = curr->next;
		curr->prev = last;
		last = curr;
	}
}

void DoubleList::Free3Links()
{
	DoubleLink* curr = _head;
	int i = 0;

	while (0 != _head && i < 3)
	{
		curr = _head->next;
		free(_head);
		_head = curr;

		i++;
	}

	if (0 != _head)
	{
		_head->prev = 0;
	}
}

void DoubleList::ReverseList()
{
	DoubleLink* curr = _head;
	DoubleLink* trail = 0;

	while (0 != curr)
	{
		curr->prev = curr->next;
		curr->next = trail;
		trail = curr;
		curr = curr->prev;
	}

	_head = trail;
}

void DoubleList::WalkList()
{
	DoubleLink* curr = _head;
	DoubleLink* trail = 0;

	std::cout << "Walk to the end of the list..." << endl;

	while (0 != curr)
	{
		std::cout << "  Link.name " << curr->name << endl;
		trail = curr;
		curr = curr->next;
	}

	std::cout << "Now walk back to the front..." << endl;

	while (0 != trail)
	{
		std::cout << "  Trail.name " << trail->name << endl;
		trail = trail->prev;
	}
}