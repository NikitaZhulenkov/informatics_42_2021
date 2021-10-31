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
	y = (pow(a, 1 / 3) + tg(b * x) ^ 4, 5) / (pow(b, 1 / 5) + ctg(a * x) ^ 2, 7);
	cout << "y = " << y << endl;
	return 0;
}