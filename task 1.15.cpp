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
	y = (asin(x) ^ 2 + acos(x) ^ 4) ^ 3;
	cout << "y = " << y << endl;
	return 0;
}