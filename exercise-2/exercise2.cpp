#include <iostream>
using namespace std;

int main(){

    int num1, num2;

    cout<<"Ingrese los 2 numeros enteros: ";
    cin>>num1>>num2;

    if (num2 != 0) {
        if (num1 % num2 == 0) {
            cout << num1 << " es un multiplo de " << num2 << endl;
        } else {
            cout << num1 << " no es un multiplo de " << num2 << endl;
        }
    } else {
        cout << "Introduzca un valor que no sea 0" << endl;
    }

    return 0;
}