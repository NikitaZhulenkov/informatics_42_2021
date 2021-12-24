#include <iostream>
#include <string>
using namespace std;

class Massive
{
private:
	int** arr; // ������� ��������������
public:
	Massive(int row, int col) // ������� ��������������
	{
		srand(time(NULL)); // ������� ��������������
		arr = new int* [row]; // ������� ��������������
		for (int i = 0; i < row; i++) // ������� ��������������
		{
			arr[i] = new int[col]; // ������� ��������������
		}
		for (int i = 0; i < row; i++) // ������� ��������������
			for (int j = 0; j < col; j++) // ������� ��������������
				cin >> arr[i][j]; // ������� ��������������
		int sum; // ����������� �� ���������
		for (int i = 0; i < row; i++) // ����������� �� ���������
		{
			int sum = 0; // ����������� �� ���������
			for (int j = 0; j < col; j++) // ����������� �� ���������
			{
				sum = arr[i][j]; // ����������� �� ���������
			}
		}
		cout << "����� �������� ���������: " << sum << endl; // ����������� �� ���������
		int max; // ����������� �� ���������
		for (int i = 0; i < row; i++) // ����������� �� ���������
		{
			max = arr[i][0]; // ����������� �� ���������
			for (int j = 0; j < col; j++) // ����������� �� ���������
			{
				if (max < arr[i][j]) // ����������� �� ���������
				{
					max = arr[i][j]; // ����������� �� ���������
				}
			}
			cout << "������������ ��������: " << max << endl; // ����������� �� ���������
		}
		int x = 0; // ����������� �� ���������
		int y = 0; // ����������� �� ���������
		for (int i = 0; i < row; i++) // ����������� �� ���������
		{
			for (int j = 0; j < col; j++) // ����������� �� ���������
			{
				cout << arr[i][j] << " "; // ����������� �� ���������
			}
			cout << "\n"; // ����������� �� ���������
		}
		for (int i = 0; i < row; i++) // ����������� �� ���������
		{
			for (int j = 0; j < col; j++) // ����������� �� ���������
			{
				int x = 0; // ����������� �� ���������
				if (j % 2 == 0) // ����������� �� ���������
				{
					x = x + arr[i][j]; // ����������� �� ���������
					y = x / col; // ����������� �� ���������
					cout << "������� �������� ������� " << j << "= " << y << endl; // ����������� �� ���������
				}
			}
		}
		cout << "������" << arr << "�������� �����������" << endl; // ������� ��������������
	}
	~Massive() // ������� ��������������
	{
		delete[] arr; // ������� ��������������
		cout << "������" << arr << "�������� ����������" << endl; // ������� ��������������
	} 
};

void Example() // ������� ��������������
{
	cout << "������ ����������" << endl; // ������� ��������������
	Massive a(5, 3); // ������� ��������������
	cout << "����� ����������" << endl; // ������� ��������������
}

int main()
{
	setlocale(LC_ALL, "ru"); 
	Example(); // ������� ��������������
	return 0;
}