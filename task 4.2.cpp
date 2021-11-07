#include <iostream>
#include <cmath>

using namespace std;

float S(int P, int I, float m, int n)
{
	float S0;
	S0 = P * pow(1 + ((I / 100) / (m / 12)), (m / 12 * n));
	return S0;
}

int main()
{
	float S3, S6, S12;
	int P1, n1, I1;
	I1 = 15;
	cout << "Input P =";
	cin >> P1;
	cout << "Input n =";
	cin >> n1;
	//cout << "Input m =";
	//cin >> m;
	S3 = S(P1, I1, 3, n1);
	S6 = S(P1, I1, 6, n1);
    S12 = S(P1, I1, 12, n1);
	cout << "S =" << S3 << endl;
	cout << "S =" << S6 << endl;
	cout << "S =" << S12 << endl;
	return 0;
}