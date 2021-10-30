#include <iostream>
#include <math.h>
using namespace std;

int perimetr(float a, float b, float c)
{
	int perimetr;
	perimetr = a + b + c * 2;
	return perimetr;
}

int square(float a, float b, float h)
{
	int square;
	square = ((a + b) / 2) * h;
	return square;
}

int main()
{
	int a, b, c, h;
	int perimetr, square;
	cout << "Input a =";
	cin >> a;
	cout << "Input b =";
	cin >> b;
	cout << "Input c =";
	cin >> c;
	cout << "Input h =";
	cin >> h;
	perimetr = a + b + c * 2;
	cout << "Perimetr =" << perimetr << endl;
	square = ((a + b) / 2) * h;
	cout << "Square =" << square << endl;
	return 0;
}