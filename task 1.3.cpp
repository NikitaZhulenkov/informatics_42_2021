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
	y = (1 + lg(x / a) ^ 2) / (b - e(x / a));
	cout << "y = " << y << endl;
	return 0;
}