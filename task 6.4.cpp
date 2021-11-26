#include <iostream>

using namespace std;

int nod(int x, int y)
{
	int N;
	if (x == y)
	{
		return x;
	}
	int n;
	n = x - y;
	if (n > 0)
	{
		N = nod(y, n);
	}
	else
	{
		n = -n;
		N = nod(x, n);
	}
	return N;
}

int nok(int x, int y)
{
	return x * y / nod(x, y);
}

int main()
{
	int x, y;
	cout << "Input x: ";
	cin >> x;
	cout << "Input y: ";
	cin >> y;
	cout << "nok = " << nok(x, y) << endl;
	return 0;
}