#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	const int a = 2.5;
	const int b = 4.6;
	int x;
	cout << "Input x =";
	cin >> x;
	cout << "size of (float) :" << sizeof(float);
	cout << "\nsize of (x) :" << sizeof(x);
	float y;
	y = (a + b * x) ^ 2.5 / (1 + lg(a + b * x));
	cout << "y =" << y << endl;
	return 0;
}
