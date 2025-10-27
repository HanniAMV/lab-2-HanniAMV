#include <iostream>

using namespace std;

int main() {
    int x = 0;
    cout << "***********" << endl;
    cout << "x  f(x)" << endl;
    cout << "***********" << endl;
    while (x <= 5) {
        int fx = x * x * x - x * x + 5;
        cout << x << "  " << fx << endl;
        x = x + 1;
    }
    cout << "***********" << endl;
    return 0;
}