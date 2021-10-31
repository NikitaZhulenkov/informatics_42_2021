#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	float x, a, b;
	float y;
	cout << "Input a =";
	cin >> a;
	cout << "Input b =";
	cin >> b;
	cout << "Input x =";
	cin >> x;
	y = pow(a * x + b, 1 / 3) / lg(x) ^ 2;
	cout << "y = " << y << endl;
	return 0;
}