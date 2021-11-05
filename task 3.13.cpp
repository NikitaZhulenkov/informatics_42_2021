#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	const int a = 1,6;
	const int b = 0;
	int x;
	cout << "Input x =";
	cin >> x;
	cout << "size of (float) :" << sizeof(float);
	cout << "\nsize of (x) :" << sizeof(x);
	float y;
	y = a ^ (x ^ 2 - 1) - lg(x ^ 2 - 1) + pow(x ^ 2 - 1, 1 / 3);
	cout << "y = " << y << endl;
	return 0;
}
