#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	const int a = 0,05;
	const int b = 0,06;
	int x;
	cout << "Input x =";
	cin >> x;
	cout << "size of (float) :" << sizeof(float);
	cout << "\nsize of (x) :" << sizeof(x);
	float y;
	y = pow(a * x + b, 1 / 3) / lg(x) ^ 2;
	cout << "y =" << y << endl;
	return 0;
}
