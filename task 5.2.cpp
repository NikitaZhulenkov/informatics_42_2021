#include <iostream>

using namespace std;

void Float(int *x, int *y)
{
	float example = *x;
	*x = *y;
	*y = example;
}

void main()
{
	int var1 = 65;
	int var2 = 28;

	cout << "var1\t" << var1 << endl;
	cout << "var2\t" << var2 << endl;
	cout << "Float" << endl;
	Float(&var1, &var2);
	cout << "var1\t" << var1 << endl;
	cout << "var2\t" << var2 << endl;
}