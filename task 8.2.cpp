#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Employee // ������� �� �������� � task 8.1
{
	string IFO; // ������� �� �������� � task 8.1
	string post; // ������� �� �������� � task 8.1
	int experience; // ������� �� �������� � task 8.1
	int homeaddress; // ������� �� �������� � task 8.1
	int phonenumber; // ������� �� �������� � task 8.1
	int hours; // ������� �� �������� � task 8.1
    int salary; // ������� �� �������� � task 8.1
    int premy; // ������� �� �������� � task 8.1
public:
    void setEmployee(string IFO, string post, int experience, int homeaddress, int phonenumber, int hours, int salary, int premy) //����������� �� ���������
    {
        int s; //����������� �� ���������
        s = salary * hours; //����������� �� ���������
        if (experience >= 1 && experience < 3) //����������� �� ���������
            premy = 0.03 * s; //����������� �� ���������
        else //����������� �� ���������
        { 
            if (experience >= 3 && experience < 6) //����������� �� ���������
                premy = 0.05 * s; //����������� �� ���������
            else //����������� �� ���������
            {
                if (experience >= 6 && experience < 9) //����������� �� ���������
                    premy = 0.07 * s; //����������� �� ���������
                else //����������� �� ���������
                {
                    if (experience > 10) //����������� �� ���������
                        premy = 0.13 * s; //����������� �� ���������
                }
            }
        }
    }
    void getEmployee() //����������� �� ���������
    {
        cout << IFO << endl; //����������� �� ���������
        cout << post << endl; //����������� �� ���������
        cout << "Experience: " << experience << endl; //����������� �� ���������
        cout << "Home address: " << homeaddress << endl; //����������� �� ���������
        cout << "Phone number: " << phonenumber << endl; //����������� �� ���������
        cout << "Hours: " << hours << endl; //����������� �� ���������
        cout << "Salary: " << salary << endl; //����������� �� ���������
    }
};

int main()
{
    string IFO; // ������� �� �������� � task 8.1
    string post; // ������� �� �������� � task 8.1
    int experience, homeaddress, phonenumber, hours, salary, premy; // ������� �� �������� � task 8.1
    cout << "Input IFO" << endl; // ������� �� �������� � task 8.1
    cin >> IFO; // ������� �� �������� � task 8.1
    cout << "Input post" << endl; // ������� �� �������� � task 8.1
    cin >> post; // ������� �� �������� � task 8.1
    cout << "Input experience" << endl; // ������� �� �������� � task 8.1
    cin >> experience; // ������� �� �������� � task 8.1
    cout << "Input homeaddress" << endl; // ������� �� �������� � task 8.1
    cin >> homeaddress; // ������� �� �������� � task 8.1
    cout << "Input phonenumber" << endl; // ������� �� �������� � task 8.1
    cin >> phonenumber; // ������� �� �������� � task 8.1
    cout << "Input hours" << endl; // ������� �� �������� � task 8.1
    cin >> hours; // ������� �� �������� � task 8.1
    cout << "Input salary" << endl; // ������� �� �������� � task 8.1
    cin >> salary; // ������� �� �������� � task 8.1
    cout << "Input premy" << endl; // ������� �� �������� � task 8.1
    cin >> premy; // ������� �� �������� � task 8.1

    Employee firstEmployee; // ������� �� �������� � task 8.1
    firstEmployee.setEmployee(IFO, post, experience, homeaddress, phonenumber, hours, salary, premy); // ������� �� �������� � task 8.1
    firstEmployee.getEmployee(); // ������� �� �������� � task 8.1
	return 0;
}
