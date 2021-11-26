#include <iostream>

using namespace std;

int f(int n)
{
	if (n == 0)
	{
		return 0;
	}
	if (n == 1)
	{
		return 3;
	}
	if (n == 2)
	{
		return 5;
	}
	return f(n - 1) + f(n - 2) + f(n - 3);
}

int main()
{
	cout << f(15) << endl;
	return 0;
}