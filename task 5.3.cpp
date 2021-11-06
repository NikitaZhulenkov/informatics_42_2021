#include <iostream>

using namespace std;

void main()
{
	int size;
	cin >> size;
	int *arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = i;
	}
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
		cout << arr + i << endl;
	}
	delete[] arr;
}