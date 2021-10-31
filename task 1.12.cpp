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
	y = lna(| b ^ 2 - x ^ 2 | ) / pow(| x ^ 2 - a ^ 2, 1 / 5);
	cout << "y = " << y << endl;
	return 0;
}