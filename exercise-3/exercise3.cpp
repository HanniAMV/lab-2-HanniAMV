#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Introduzca un número entero de cinco dígitos: ";
    cin >> num;

    int d1 = num / 10000;
    int d2 = (num % 10000) / 1000;
    int d3 = (num % 1000) / 100;
    int d4 = (num % 100) / 10;
    int d5 = num % 10;

    cout << "Dígitos separados: " << d1 << "   " << d2 << "   " << d3 << "   " << d4 << "   " << d5 << endl;

    return 0;
}