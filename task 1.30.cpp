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
	y = (pow((x - a), 1 / 3) + pow((x + b), 1 / 5)) / (pow(x, 1 / 7) - pow(x ^ 2, 1 / 9) - (a - b) ^ 2);
	cout << "y = " << y << endl;
	return 0;
}