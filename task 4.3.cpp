#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

/// <summary>
/// вычисляет сумму ряда
/// </summary>
/// <param name="k">эстоппер</param>
void CalculateSumOfSeries(int k)
{
	float s = 0;
	for (int n = 1; n <= k; n++)
	{
		s += 2 / ((2 * n + 1) * (2 * n + 3));
	}
	cout << "summa = " << s<< endl;
	
}

int main()
{
	int k;
	cout << " enter k" << endl;
	cin >> k;
	CalculateSumOfSeries(k);
	return 0;
}