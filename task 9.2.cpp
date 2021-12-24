#include <iostream>

using namespace std;

class Vehicle // ������� ��������������
{
public:
	virtual double getNalog1() = 0; // ������� ��������������
	virtual double getNalog2() = 0; // ������� ��������������
	virtual double getNalog3() = 0; // ������� ��������������
	virtual double getNalog4() = 0; // ������� ��������������
	virtual void showVehicleType() = 0; // ������� ��������������
};

class Car : public Vehicle // ������� ��������������
{
private: 
	double betN; // ������ ������ ��� ������� // ������� ��������������
	double powerN; // �������� �� (���������� �.�.) // ������� ��������������
	double months; // ������ �������� �� � ���� / 12 ������� // ������� ��������������
	double coefficient; // ���������� ����������� // ������� ��������������
	double sumN; // ����� ������ // ������� ��������������
	double x; // �������� �� � ���� / 12 ������� // ������� ��������������
public:
	Car(double b, double p, double m, double c, double x) : betN(b), powerN(p), months(m), coefficient(c), x(x) // ������� ��������������
	{
		if (x < 1) // ������� ��������������
		sumN = b * p * m; // ������� ��������������
		else // ������� ��������������
		{ 
			if (x = 1) // ������� ��������������
			sumN = b * p; // ������� ��������������
			else // ������� ��������������
			{
				if (x < 1 && c > 3) // ������� ��������������
				sumN = b * p * m * c; // ������� ��������������
				else // ������� ��������������
				{
					if (x > 1 && c > 3) // ������� ��������������
					sumN = b * p * c; // ������� ��������������
				}
			}
		}
	}
	double getNalog1() override // ������� ��������������
	{
		return betN * powerN * months; // ������� ��������������
	}
	double getNalog2() override // ������� ��������������
	{
		return betN * powerN; // ������� ��������������
	}
	double getNalog3() override // ������� ��������������
	{
		return betN * powerN * months * coefficient; // ������� ��������������
	}
	double getNalog4() override // ������� ��������������
	{
		return betN * powerN * coefficient; // ������� ��������������
	}
	void showVehicleType() // ������� ��������������
	{
		cout << "Car: " << endl; // ������� ��������������
	}
};

class Bus : public Vehicle // ������� ��������������
{
private:
	double betN; // ������� ��������������
	double powerN; // ������� ��������������
	double months; // ������� ��������������
	double coefficient; // ������� ��������������
	double sumN;  // ������� ��������������
	double x; // ������� ��������������
public:
	Bus(double b, double p, double m, double c, double x) : betN(b), powerN(p), months(m), coefficient(c), x(x) // ������� ��������������
	{
		if (x < 1) // ������� ��������������
			sumN = b * p * m; // ������� ��������������
		else // ������� ��������������
		{
			if (x = 1) // ������� ��������������
				sumN = b * p; // ������� ��������������
			else // ������� ��������������
			{
				if (x < 1 && c > 3) // ������� ��������������
					sumN = b * p * m * c; // ������� ��������������
				else // ������� ��������������
				{
					if (x > 1 && c > 3) // ������� ��������������
						sumN = b * p * c; // ������� ��������������
				}
			}
		}
	}
	double getNalog1() override // ������� ��������������
	{
		return betN * powerN * months; // ������� ��������������
	}
	double getNalog2() override // ������� ��������������
	{
		return betN * powerN; // ������� ��������������
	}
	double getNalog3() override // ������� ��������������
	{
		return betN * powerN * months * coefficient; // ������� ��������������
	}
	double getNalog4() override // ������� ��������������
	{
		return betN * powerN * coefficient; // ������� ��������������
	}
	void showVehicleType() // ������� ��������������
	{ 
		cout << "Bus: " << endl; // ������� ��������������
	}
};

class Motorcycle : public Vehicle // ������� ��������������
{
private: // ������� ��������������
	double betN; // ������� ��������������
	double powerN; // ������� ��������������
	double months; // ������� ��������������
	double coefficient; // ������� ��������������
	double sumN;  // ������� ��������������
	double x; // ������� ��������������
public:
	Motorcycle(double b, double p, double m, double c, double x) : betN(b), powerN(p), months(m), coefficient(c), x(x) // ������� ��������������
	{
		if (x < 1) // ������� ��������������
			sumN = b * p * m; // ������� ��������������
		else // ������� ��������������
		{
			if (x = 1) // ������� ��������������
				sumN = b * p; // ������� ��������������
			else // ������� ��������������
			{
				if (x < 1 && c > 3) // ������� ��������������
					sumN = b * p * m * c; // ������� ��������������
				else // ������� ��������������
				{
					if (x > 1 && c > 3) // ������� ��������������
						sumN = b * p * c; // ������� ��������������
				}
			}
		}
	}
	double getNalog1() override // ������� ��������������
	{
		return betN * powerN * months; // ������� ��������������
	}
	double getNalog2() override // ������� ��������������
	{
		return betN * powerN; // ������� ��������������
	}
	double getNalog3() override // ������� ��������������
	{
		return betN * powerN * months * coefficient; // ������� ��������������
	}
	double getNalog4() override // ������� ��������������
	{
		return betN * powerN * coefficient; // ������� ��������������
	}
	void showVehicleType() // ������� ��������������
	{
		cout << "Motorcycle: " << endl; // ������� ��������������
	}
};

class Plane : public Vehicle // ������� ��������������
{
private:
	double betN; // ������� ��������������
	double powerN; // ������� ��������������
	double months; // ������� ��������������
	double coefficient; // ������� ��������������
	double sumN; // ������� ��������������
	double x; // ������� ��������������
public:
	Plane(double b, double p, double m, double c, double x) : betN(b), powerN(p), months(m), coefficient(c), x(x) // ������� ��������������
	{
		if (x < 1) // ������� ��������������
			sumN = b * p * m; // ������� ��������������
		else // ������� ��������������
		{
			if (x = 1) // ������� ��������������
				sumN = b * p; // ������� ��������������
			else // ������� ��������������
			{
				if (x < 1 && c > 3) // ������� ��������������
					sumN = b * p * m * c; // ������� ��������������
				else // ������� ��������������
				{
					if (x > 1 && c > 3) // ������� ��������������
						sumN = b * p * c; // ������� ��������������
				}
			}
		}
	}
	double getNalog1() override // ������� ��������������
	{
		return betN * powerN * months; // ������� ��������������
	}
	double getNalog2() override // ������� ��������������
	{
		return betN * powerN; // ������� ��������������
	}
	double getNalog3() override // ������� ��������������
	{
		return betN * powerN * months * coefficient; // ������� ��������������
	}
	double getNalog4() override // ������� ��������������
	{
		return betN * powerN * coefficient; // ������� ��������������
	}
	void showVehicleType() // ������� ��������������
	{
		cout << "Plane: " << endl; // ������� ��������������
	}
};

int main()
{
	Car C(8, 50, 10, 1.3, 10); // ������� ��������������
	Bus B(8, 50, 10, 1.3, 10); // ������� ��������������
	Motorcycle M(8, 50, 10, 1.3, 10); // ������� ��������������
	Plane P(8, 50, 10, 1.3, 10); // ������� ��������������
	 
	cout << "Car: " << C.getNalog1() << endl; // ������� ��������������
	cout << "Bus: " << B.getNalog1() << endl; // ������� ��������������
	cout << "Motorcycle: " << M.getNalog1() << endl; // ������� ��������������
	cout << "Plane: " << P.getNalog1() << endl; // ������� ��������������

	cout << "Car: " << C.getNalog2() << endl; // ������� ��������������
	cout << "Bus: " << B.getNalog2() << endl; // ������� ��������������
	cout << "Motorcycle: " << M.getNalog2() << endl; // ������� ��������������
	cout << "Plane: " << P.getNalog2() << endl; // ������� ��������������

	cout << "Car: " << C.getNalog3() << endl; // ������� ��������������
	cout << "Bus: " << B.getNalog3() << endl; // ������� ��������������
	cout << "Motorcycle: " << M.getNalog3() << endl; // ������� ��������������
	cout << "Plane: " << P.getNalog3() << endl; // ������� ��������������

	cout << "Car: " << C.getNalog4() << endl; // ������� ��������������
	cout << "Bus: " << B.getNalog4() << endl; // ������� ��������������
	cout << "Motorcycle: " << M.getNalog4() << endl; // ������� ��������������
	cout << "Plane: " << P.getNalog4() << endl; // ������� ��������������
	return 0;
}
