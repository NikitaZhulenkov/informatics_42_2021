#include <iostream>
#include <cmath>

using namespace std;

bool prost(int x)
{
	int y = 0;
	for (int i = 2; i <= x; i++)
	{
		if (x % i == 0)
			cout << "is prost";
	}
	return y == 0;
}

int main()
{
	setlocale(LC_ALL, "rus");
	int n;
	cout << "¬ведите n: ";
	cin >> n;
	for (int i = 2; i <= n; i++)
		if (prost(i))
			cout << i << endl;
	return 0;
}