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
	y = a ^ (x ^ 2 - 1) - lg(x ^ 2 - 1) + pow(x ^ 2 - 1, 1 / 3);
	cout << "y = " << y << endl;
	return 0;
}