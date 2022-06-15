
//#ifndef __LIST_H_INCLUDED__
//#define __LIST_H_INCLUDED__

#pragma once

#include<iostream>

using namespace std;

class List
{
public:
	List();
	~List();

	void push_back(int data);

	int getSize() { return Size; }

	int& operator[](const int index);

	void pop_front();

	void clear();

	void push_front(int data);

	void pop_back();

	void insert(int data, int index);

	void removeAt(int index);

	void printAll() {
		for (int i = 0; i < Size; i++)
		{
			if (i != 0)
				cout << "->";

			cout << "(" << (*this)[i] << ")";
		}
		cout << endl;
	}

private:

	class Node
	{
	public:
		Node* pNext;
		int data;
		Node(int data = 0, Node* pNext = nullptr)
		{
			this->data = data;
			this->pNext = pNext;
		}
	};

	Node* head;
	Node* tail;
	int Size;
};









//#endif // End of __LIST_H_INCLUDED__
