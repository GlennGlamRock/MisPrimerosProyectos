#include <iostream>
using namespace std;

int factorial(int n);

int main() {
    int num;
    cout << "Ingrese un número: ";
    cin >> num;

    int resultado = factorial(num);
    cout << "El factorial de " << num << " es: " << resultado << '\n';

    return 0;
}

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}