#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	const int a = 0.4;
	const int b = 0.8;
	int x;
	cout << "Input x =";
	cin >> x;
	cout << "size of (float) :" << sizeof(float);
	cout << "\nsize of (x) :" << sizeof(x);
	float y;
	y = ((a ^ x - b ^ x) / lg(a / b)) * pow(a * b, 1 / 3);
	cout << "y =" << y << endl;
	return 0;
}
