#include <iostream>

using namespace std;

int main()
{
	int n, P;
	cout << "Input n =";
	cin >> n;
	P = (n % 10) * (n / 10 % 10) * (n / 100 % 10) * (n / 1000 % 10) * (n / 10000 % 10) * (n / 100000);
	cout << "Prod =" << P << endl;
	return 0;
}