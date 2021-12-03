#include <iostream>

using namespace std;

void triangle(size_t height, char symbol = '#')
{
    for (size_t i = 0; i < height; ++i)
    {
        for (size_t j = 0; j <= i; ++j)
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
    cin.get();
    cout << "####" << '\n' << "###" << '\n' << "##" << '\n' << "#";
    cin.get();
    cout << "   #" << '\n' << "  ##" << '\n' << " ###" << '\n' << "####";
    cin.get();
    cout << "####" << '\n' << " ###" << '\n' << "  ##" << '\n' << "   #";
    return 0;
}