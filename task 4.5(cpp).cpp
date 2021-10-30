#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	int x, y, z;
	int D, f1, f2;
	cout << "Input x =";
	cin >> x;
	cout << "Input y =";
	cin >> y;
	cout << "Input z =";
	cin >> z;
	D = y ^ 2 - 4 * x * z;
	if (D < 0)
	{
		cout << "Корней нет";
	}
	
	if (D == 0) 
	{
		cout << "Есть ровно один корень";
		f1 = -y / (2 * x);
		cout << "f1 = " << f1 << endl;
	}

	if (D > 0)
	{
		cout << "Есть ровно два корня";
		f1 = (-y + sqrt(D)) / (2 * x);
		cout << "f1 = " << f1 << endl;
		f2 = (-y - sqrt(D)) / (2 * x);
		cout << "f2 = " << f2 << endl;
	}
	return 0;
}