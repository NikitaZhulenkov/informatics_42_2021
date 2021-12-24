#include <iostream>

using namespace std;

class Pendulum // ������� ��������������
{
public:
    virtual double getT() = 0; // ������� ��������������
    virtual double getw() = 0; // ������� ��������������
    virtual double getF() = 0; // ������� ��������������
    virtual void showPendulumType() = 0; // ������� ��������������
};

class Physical : public Pendulum // ������� ��������������
{
private: 
    double m; // ������� ��������������
    double l; // ������� ��������������
    double I; // ������� ��������������
public: 
    Physical(double m, double l, double I) : m(m), l(l), I(I) // ������� ��������������; � ������ ��� ����������, ����� � �������� ������������� ��� ������ � ������ �� ���������
    { 
    }
    double getT() override // ������� ��������������
    {
        return 2 * 3.14 * sqrt(I / (m * 10 * l)); // ������� ��������������
    }
    double getw() override // ������� ��������������
    {
        return sqrt(m * 10 * l / I); // ������� ��������������
    }
    double getF() override // ������� ��������������
    {
        return m * 10; // ������� ��������������
    }
    void showPendulumType() // ������� ��������������
    {
        cout << "Physical" << endl; // ������� ��������������
    }
};
class Mathematical : public Pendulum // ������� ��������������
{
private:
    double m; // ������� ��������������
    double l; // ������� ��������������
public:
    Mathematical(double m, double l) : m(m), l(l) // ������� ��������������
    {
    }
    double getT() override // ������� ��������������
    {
        return 2 * 3.14 * sqrt(l / 10); // ������� ��������������
    }
    double getw() override // ������� ��������������
    {
        return sqrt(10 / l); // ������� ��������������
    }
    double getF() override // ������� ��������������
    {
        return m * 10; // ������� ��������������
    }
    void showPendulumType() // ������� ��������������
    {
        cout << "Mathematical" << endl; // ������� ��������������
    }
};
class Spiral : public Pendulum // ������� ��������������
{
private:
    double m; // ������� ��������������
    double g; // ������� ��������������
    double x; // ������� ��������������
    double k; // ������� ��������������
public:
    Spiral(double m, double k, double x) : m(m), k(k), x(x) // ������� ��������������
    {
    }
    double getT() override // ������� ��������������
    {
        return 2 * 3.14 * sqrt(m / k); // ������� ��������������
    }
    double getw() override // ������� ��������������
    {
        return sqrt(k / m); // ������� ��������������
    }
    double getF() override // ������� ��������������
    {
        return k * x; // ������� ��������������
    }
    void showPendulumType() // ������� ��������������
    {
        cout << "Spiral" << endl; // ������� ��������������
    }
};

int main() // ������� ��������������
{
    Physical P(15, 3, 5); // ������� ��������������
    Mathematical M(15, 15); // ������� ��������������
    Spiral S(15, 15, 4); // ������� ��������������

    cout << "Physical P: " << P.getT() << endl; // ������� ��������������
    cout << "Mathemaitcal M: " << M.getT() << endl; // ������� ��������������
    cout << "Spiral S: " << S.getT() << endl; // ������� ��������������

    cout << "Physical P: " << P.getw() << endl; // ������� ��������������
    cout << "Mathemaitcal M: " << M.getw() << endl; // ������� ��������������
    cout << "Spiral S: " << S.getw() << endl; // ������� ��������������

    cout << "Physical P: " << P.getF() << endl; // ������� ��������������
    cout << "Mathemaitcal M: " << M.getF() << endl; // ������� ��������������
    cout << "Spiral S: " << S.getF() << endl; // ������� ��������������
    return 0;
}
