#include <iostream>

using namespace std;

void Foo(int* px, int* py, int* pz)
{
	(*px) = 123;
	(*py)++;
	(*pz) = -45;
}

void main()
{
	int x = 10, y = 6, z = 32;
	cout << "x =" << x << endl;
	cout << "y =" << y << endl;
	cout << "z =" << z << endl;

	cout << "foo" << endl;

	Foo(&x, &y, &z);

	cout << "x =" << x << endl;
	cout << "y =" << y << endl;
	cout << "z =" << z << endl;
}

