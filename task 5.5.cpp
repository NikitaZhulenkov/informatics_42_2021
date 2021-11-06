#include <iostream>

using namespace std;

void main()
{
	int rows;
	int columns;
	cout << "Input rows count" << endl;
	cin >> rows;
	cout << "input columns count" << endl;
	cin >> columns;
	int** arr = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[columns];
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			cout << arr[i][j] << "\t" << endl;
		}
		cout << endl;
	}
	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
}