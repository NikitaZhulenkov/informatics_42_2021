#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	const int a = 0.8;
	const int b = 0.4;
	int x;
	cout << "Input x =";
	cin >> x;
	cout << "size of (float) :" << sizeof(float);
	cout << "\nsize of (x) :" << sizeof(x);
	float y;
	y = (pow((x - a) ^ 2, 1 / 3) + pow(| x + b | , 1 / 5)) / pow(x ^ 2 - (a + b) ^ 2, 1 / 9);
	cout << "y =" << y << endl;
	return 0;
}
