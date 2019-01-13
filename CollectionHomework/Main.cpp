#include "Collection.h"

#include <iostream>

using namespace std;

int main()
{//test
	Collection collection (4,3);
	collection.Print();
	cout << endl;
	collection.Add(4);
	collection.Print();
	cout << endl;
	collection.Add(4);
	collection.Print();
	cout << endl;
	collection.Add(6);
	collection.Print();
	cout << endl;
	collection.Add(2);
	collection.Print();
	cout << endl;
	cout << collection.GetLength() << endl;
	collection.Remove(6);
	collection.Print();
	cout << endl;
	cout << collection.GetLength() << endl;
	collection.Remove(6);
	cout << collection.GetLength() << endl;
}