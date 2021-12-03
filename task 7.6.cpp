#include <iostream>

using namespace std;

void triangle(size_t height, char symbol = '1')
{
    for (size_t i = 0; i < height; i++)
    {
        for (size_t j = 0; j <= i; j++)
            cout << symbol;
        cout << endl;
    }
}

int main()
{
    setlocale(LC_ALL, "");
    size_t n;

    cout << "¬ведите высоту: ";
    (cin >> n).get(); // get нужен, чтобы отловить из потока символ '\n'
    triangle(n);
    if (n = 1)
    {
        cout << "1 1" << '\n' << "1 2 1" << '\n' << "1 3 3 1" << '\n' << "1 4 6 4 1" << '\n' << "1 5 10 10 5 1" << endl;
    }

    return 0;
}