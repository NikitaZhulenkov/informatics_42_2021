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

int main()
{
	int x, y;
	cout << "input x: ";
	cin >> x;
	cout << "Input y: ";
	cin >> y;
	cout << "nod = " << nod(x,y) << endl;
}