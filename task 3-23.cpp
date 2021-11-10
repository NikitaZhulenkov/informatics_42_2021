#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	const int a = 7.2;
	const int b = 1.3;
	int x;
	cout << "Input x =";
	cin >> x;
	cout << "size of (float) :" << sizeof(float);
	cout << "\nsize of (x) :" << sizeof(x);
	float y;
	y = pow((a + b * x) / lg(x) ^ 3, 1 / 5);
	cout << "y =" << y << endl;
	return 0;
}
