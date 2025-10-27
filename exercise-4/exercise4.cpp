#include <iostream>

using namespace std;

int main() {
    int num1, num2, num3;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    cout << "Ingrese el tercer numero: ";
    cin >> num3;

    int middle_val;

    if ((num1 > num2 && num1 < num3) || (num1 < num2 && num1 > num3)) {
        middle_val = num1;
    }
    else if ((num2 > num1 && num2 < num3) || (num2 < num1 && num2 > num3)) {
        middle_val = num2;
    }
    else {
        middle_val = num3;
    }

    cout << "\nLos numeros ingresados son: " << num1 << ", " << num2 << ", y " << num3 << endl;
    cout << "El numero del medio entre los tres numeros es: " << middle_val << endl;

    return 0;
}