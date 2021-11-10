#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	const int a = 2;
	const int b = 4.1;
	int x;
	cout << "Input x =";
	cin >> x;
	cout << "size of (float) :" << sizeof(float);
	cout << "\nsize of (x) :" << sizeof(x);
	float y;
	y = loga(b ^ 2 - x ^ 2) / pow(| x ^ 2 - a ^ 2 | , 1 / 3);
	cout << "y =" << y << endl;
	return 0;
}
