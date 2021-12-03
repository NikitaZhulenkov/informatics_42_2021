#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float S = 0;
    int k = 1;
    int n;
    double factorial = 1;
    cout << "Input n:";
    cin >> n;
    do
    {
        //нахождение факториала
        factorial = k;
        for (int f = 1; f <= k; f++)
            factorial = factorial * f;
        S = (-1) * k * ((5 - k) / factorial);
        k = k + 1;
    } 
    while (S >= n);
    cout << "S = " << S << endl;
    return 0;
}