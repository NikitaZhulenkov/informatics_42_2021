#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	const int a = 2,0;
	const int b = 0;
	int x;
	cout << "Input x =";
	cin >> x;
	cout << "size of (float) :" << sizeof(float);
	cout << "\nsize of (x) :" << sizeof(x);
	float y;
	y = lg(a + x) ^ 2 / (a + x) ^ 2;
	cout << "y = " << y << endl;
	return 0;
}
