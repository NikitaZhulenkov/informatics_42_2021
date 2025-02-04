#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

class Student // ����������� �� ������� 18.12.2021
{
	string IFO; // ����������� �� ������� 18.12.2021
	int course; // ����������� �� ������� 18.12.2021
	int group; // ����������� �� ������� 18.12.2021
	int age; // ����������� �� ������� 18.12.2021

public: // ����������� �� ������� 18.12.2021
	void input(); // ����������� �� ������� 18.12.2021
	void info(); // ����������� �� ������� 18.12.2021
private: // ����������� �� ������� 18.12.2021
	void checkAge(); // ����������� �� ������� 18.12.2021
};
// ���������� � �� ������ (���������� �� ��������� ������)
void Student::info() // ����������� �� ������� 18.12.2021
{
	cout << IFO << " " << course << " " << group << " " << age << endl; // ����������� �� ������� 18.12.2021
}

void Student::input() // ����������� �� ������� 18.12.2021
{
	cout << "Input IFO: " << endl; // ����������� �� ������� 18.12.2021
	cin >> IFO; // ����������� �� ������� 18.12.2021
	cout << "Input course: " << endl; // ����������� �� ������� 18.12.2021
	cin >> course; // ����������� �� ������� 18.12.2021
	cout << "Input group: " << endl; // ����������� �� ������� 18.12.2021
	cin >> group; // ����������� �� ������� 18.12.2021
	checkAge(); // ����������� �� ������� 18.12.2021
}

void Student::checkAge() // ����������� �� ������� 18.12.2021
{
	cout << "Input age 17 to 30 do: " << endl; // ����������� �� ������� 18.12.2021
	cin >> age; // ����������� �� ������� 18.12.2021
	while (age < 30 && age > 17) // ����������� �� ������� 18.12.2021
	{
		cout << "Input age: " << endl; // ����������� �� ������� 18.12.2021
		cin >> age; // ����������� �� ������� 18.12.2021
	}
	this->age = age; // ����������� �� ������� 18.12.2021
}

int main() 
{
	SetConsoleCP(CP_UTF8); // ����������� �� ������� 18.12.2021
	SetConsoleOutputCP(CP_UTF8); // ����������� �� ������� 18.12.2021

	Student firstStudent; // ����������� �� ������� 18.12.2021
	firstStudent.input(); // ����������� �� ������� 18.12.2021
	firstStudent.info(); // ����������� �� ������� 18.12.2021
	return 0;
}