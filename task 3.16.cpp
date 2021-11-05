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
	y = (a + tg(b * x) ^ 2) / (b + ctg(a * x) ^ 2);
	cout << "y = " << y << endl;
	return 0;
}
