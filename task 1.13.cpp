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
	y = (a ^ 3 * sqrt(x) - b * log5(x)) / lg(x - 1) ^ 3;
	cout << "y = " << y << endl;
	return 0;
}