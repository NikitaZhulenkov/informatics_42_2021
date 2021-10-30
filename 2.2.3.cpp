#include <iostream>
#include <math.h>
using namespace std;

int perimetr(float a)
{
	int perimetr;
	perimetr = a * 4;
	return perimetr;
}

int square(float a)
{
	int square;
	square = a * a;
	return square;
}

int main()
{
	int a;
	int perimetr, square;
	cout << "Input a =";
	cin >> a;
	perimetr = a * 4;
	cout << "Perimetr =" << perimetr << endl;
	square = a * a;
	cout << "Square =" << square << endl;
	return 0;
}