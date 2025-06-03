#include <iostream>

using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num;
    cout << "Ingrese un número para calcular su factorial: ";
    cin >> num;
    cout << "El factorial de " << num << " es " << factorial(num) << endl;
    return 0;
}