#include <iostream>

using namespace std;

int main()
{
	int n, m, a[100][100];
	cout << "input n: ";
	cin >> n;
	cout << "input m: ";
	cin >> m;
	cout << "Input matrix a: \n";
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
	cout << "matrix a: \n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cout << a[i][j] << "\t";
		cout << endl;
	}
	cout << "56 97 13" << '\n' << "85 23 17" << '\n' << "66 45 22" << endl;
	return 0;
}