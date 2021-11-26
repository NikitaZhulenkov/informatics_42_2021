#include <iostream>

using namespace std;

int nod(int x, int y)
{
	int a;
	if (x == y)
	{
		return x;
	}
	int b;
	b = x - y;
	if (b > 0)
	{
		a = nod(y, b);
	}
	else
	{
		b = -b;
		a = nod(x, b);
	}
	return a;
}

int main()
{
	int x, y, z;
	cout << "Input x: ";
	cin >> x;
	cout << "Input y: ";
	cin >> y;
	cout << "Input z: ";
	cin >> z;
	cout << "nod = " << nod(nod(x, y),z) << endl;
	return 0;
}