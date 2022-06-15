
#include "List.h"

//using namespace std;


List::List()
{
	Size = 0;
	head = nullptr;
	tail = nullptr;

}

List::~List()
{
	clear();
}


void List::push_back(int data)
{
	if (head == nullptr)
	{
		head = new Node(data);
	}

	else
	{
		Node* current = this->head;
		while (current->pNext != nullptr)
		{
			current = current->pNext;
		}
		current->pNext = new Node(data);

	}
	Size++;
}

int& List::operator[](const int index)
{
	int counter = 0;
	Node* current = this->head;
	while (current != nullptr)
	{
		if (counter == index)
		{
			return current->data;
		}
		current = current->pNext;
		counter++;
	}
}

void List::pop_front()
{
	Node* temp = head;

	head = head->pNext;

	delete temp;

	Size--;

	/*Node* temp = head->pNext;
	delete head;
	head = temp;
	Size--;*/

}

void List::clear()
{
	while (Size)
	{
		pop_front();
	}

}

void List::push_front(int data)
{
	head = new Node(data, head);
	Size++;
}

void List::pop_back()
{
	removeAt(Size - 1);
}

void List::insert(int data, int index)
{

	if (index == 0)
	{
		push_front(data);
	}
	else
	{
		Node* prev = this->head;
		for (int i = 0; i < index - 1; i++)
		{
			prev = prev->pNext;
		}

		prev->pNext = new Node(data, prev->pNext);


		Size++;
	}

}

void List::removeAt(int index)
{
	if (index == 0)
	{
		pop_front();
	}
	else
	{
		Node* prev = this->head;
		for (int i = 0; i < index - 1; i++)
		{
			prev = prev->pNext;
		}

		Node* toDelete = prev->pNext;
		prev->pNext = toDelete->pNext;
		delete toDelete;

		Size--;
	}
}