#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cout << "Input n: ";
    cin >> n;
    cout << "Input m: ";
    cin >> m;
    int** k = new int* [m]; // ����������� �� ��������� � �������
    for (int i = 0; i < n; i++) k[i] = new int[n]; // ����������� �� ��������� 
    cout << "Intput matrix k: \n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> k[i][j];
    for (int i = 0; i < n; i++) // ����������� �� ��������� 
        for (int j = 0; j < m / 2; j++) // ����������� �� ��������� � �������
        {
            int x = k[i][m - j - 1]; // ����������� �� ��������� � �������
            k[i][m - j - 1] = k[i][j]; // ����������� �� ��������� � �������
            k[i][j] = x; // ����������� �� ��������� � �������
        }
    cout << endl << "matrix k: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << k[i][j] << " ";
        cout << endl;
    }
    return 0;
}

