#include <iostream>

using namespace std;

int main()
{
	int n, m, a[100][100];
	cout << "Input n: ";
	cin >> n;
	cout << "Input m: ";
	cin >> m;
	cout << "Intput matrix a: \n";
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
	cout << "matrix a \n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cout << a[i][j] << "\t";
		cout << endl;
	}
	cout << "1 5 3 4" << '\n' << "9 2 7 0" << '\n' << "8 3 6 2" << endl;
	return 0;
}