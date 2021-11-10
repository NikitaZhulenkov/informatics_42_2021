#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	const int a = 4.1;
	const int b = 2.7;
	int x;
	cout << "Input x =";
	cin >> x;
	cout << "size of (float) :" << sizeof(float);
	cout << "\nsize of (x) :" << sizeof(x);
	float y;
	y = (a * sqrt(x) - b * log5(x)) / lg(| x - 1 | );
	cout << "y =" << y << endl;
	return 0;
}
