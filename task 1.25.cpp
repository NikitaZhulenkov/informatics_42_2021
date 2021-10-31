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
	y = pow((asin(x) ^ 4 + acos(x) ^ 6), 1 / 7);
	cout << "y = " << y << endl;
	return 0;
}