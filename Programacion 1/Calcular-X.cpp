/*
Cree un programa que calcule el valor x de la ecuaci´on 1 para un un n´umero n ∈ N entregado a trav´es
de la terminal. Se sugiere utilizar una sentencia for o while .
x =
Xn
i=1
i3 (1)
*/


#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    long long x = 0; // Usamos long long para evitar desbordamiento

    cout << "Ingrese un numero natural n: ";
    cin >> n;

    if (n < 1) {
        cout << "El numero debe ser un natural (n >= 1)." << endl;
        return 1;
    }

    for (int i = 1; i <= n; ++i) {
        x += pow(i, 3); // Calculamos i^3 y lo sumamos a x // equivalente a i*i*i
    }

    cout << "El valor de x es: " << x << endl;
    return 0;

}