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
	y = ((a ^ x - b ^ x) / lg(a / b)) * pow(a * b, 1 / 3);
	cout << "y = " << y << endl;
	return 0;
}