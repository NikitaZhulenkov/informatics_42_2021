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
	y = (a + tg(b * x) ^ 2) / (b + ctg(a * x) ^ 2);
	cout << "y = " << y << endl;
	return 0;
}