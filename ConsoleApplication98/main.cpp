#include <iostream>

#include "List.h"



using namespace std;

inline void func() {
	
}



int main()
{
	List lst;
	lst.push_front(12);
	lst.push_front(32);
	lst.push_front(378);

	//lst.push_back(5);
	//lst.push_back(10);
	//lst.push_back(25);

	/*int numbers;
	cin >> numbers;

	for (int i = 0; i < numbers; i++)
	{
		lst.push_back(rand()%100);
	}*/

	lst.printAll();


	cout << endl << endl << "Test:: Insert at " << 2 << endl;

	lst.insert(10, 2);


	lst.printAll();

	cout << "Test:: RemoveAT " << 1 << "st node" << endl << endl;

	lst.printAll();
	lst.removeAt(1);
	lst.printAll();
	

	//cout << "Element in " << lst.getSize() << endl << "Use pop front" << endl;

	//lst.pop_front();

	//for (int i = 0; i < lst.getSize(); i++)
	//{
	//	cout << lst[i] << " ";
	//}

	//cout << "Elements " << lst.getSize()<< endl;

	//cout << endl;
	//cout<< "Size " << lst.getSize() << endl;

	//cout << "Use clear " << endl;
	//lst.clear();

	//cout << "Size " << lst.getSize() << endl;

	return 0;
}
