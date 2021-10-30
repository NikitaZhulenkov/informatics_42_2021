#include <iostream>
#include <math.h>
using namespace std;

int perimetr(float r)
{
	int perimetr;
	const float pi = 3.14;
	perimetr = 2 * pi * r;
	return perimetr;
}

int square(float r)
{
	int square;
	const float pi = 3.14;
	square = pi * r * r;
	return square;
}

int main()
{
	int r;
	int perimetr, square;
	const float pi = 3.14;
	cout << "Input r =";
	cin >> r;
	perimetr = 2 * pi * r;
	cout << "Perimetr =" << perimetr << endl;
	square = pi * r * r;
	cout << "Square =" << square << endl;
	return 0;
}