#include <iostream>
using namespace std;

int main()
{
    int d1, d2, d3;

    cout << "Introduzca el primer digito: ";
    cin >> d1;

    cout << "Introduzca el segundo digito: ";
    cin >> d2;

    cout << "Introduzca el tercer digito: ";
    cin >> d3;

    int numCombinado = d1 * 100 + d2 * 10 + d3;

    cout << "El numero combinado de tres digitos es: " << numCombinado << endl;

    return 0;
}