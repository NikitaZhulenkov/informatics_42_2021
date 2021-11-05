#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	const int a = 2,0;
	const int b = 3,0;
	int x;
	cout << "Input x =";
	cin >> x;
	cout << "size of (float) :" << sizeof(float);
	cout << "\nsize of (x) :" << sizeof(x);
	float y;
	y = asin(x ^ a) + acos(x ^ b);
	cout << "y = " << y << endl;
	return 0;
}
