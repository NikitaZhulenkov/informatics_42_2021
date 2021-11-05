#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	const int a = 0,1;
	const int b = 0,5;
	int x;
	cout << "Input x =";
	cin >> x;
	cout << "size of (float) :" << sizeof(float);
	cout << "\nsize of (x) :" << sizeof(x);
	float y;
	y = (pow(a, 1 / 3) + tg(b * x) ^ 4, 5) / (pow(b, 1 / 5) + ctg(a * x) ^ 2, 7);
	cout << "y = " << y << endl;
	return 0;
}
