#include <iostream>
using namespace std;

int main(){

    int num1, num2, num3;

    cout<<"Ingrese el primer numero entero: ";
    cin>>num1;

    cout<<"Ingrese el segundo numero entero: ";
    cin>>num2;

    cout<<"Ingrese el tercer numero entero: ";
    cin>>num3;

    int suma= num1 + num2 + num3;
    double promedio= suma/3.0;
    int producto= num1 * num2 * num3;

    int max, min;
    if(num1>num2 && num1>num3){
        max= num1;
    } else if(num2>num1 && num2>num3){
        max= num2;
    } else {
        max = num3;
    }

    if(num1<num2 && num1<num3){
        min= num1;
    } else if (num2<num1 && num2<num3){
        min= num2;
    } else{
        min = num3;
    }
cout<<"La suma es: "<<suma<<endl;
cout<<"El promedio es: "<<promedio<<endl;
cout<<"El producto es: "<<producto<<endl;
cout<<"El mas pequeño es:"<<min<<endl;
cout<<"El mas grande es: "<<max<<endl;

    return 0;
}