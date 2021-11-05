#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	const int a = 2,0;
	const int b = 0,95;
	int x;
	cout << "Input x =";
	cin >> x;
	cout << "size of (float) :" << sizeof(float);
	cout << "\nsize of (x) :" << sizeof(x);
	float y;
	y = lg(x ^ 2 - 1) / log5(a * x ^ 2 - b);
	cout << "y =" << y << endl;
	return 0;
}
