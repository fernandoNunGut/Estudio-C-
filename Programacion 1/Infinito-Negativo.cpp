/*
Cree un programa que almacene en un arreglo los 100 primeros n´umeros enteros a partir de un valor
ingresado por la terminal hacia el infinito negativo.
*/

#include <iostream>
#include <iomanip>

using namespace std;


int main() {
    int arreglo[100];
    int valor;
    cout << "Ingrese un valor entero: ";
    cin >> valor;

    // Llenar el arreglo con los 100 primeros números enteros a partir del valor ingresado
    for (int i = 0; i < 100; i++) {
        arreglo[i] = valor - i;
    }
    // Mostrar el arreglo
    cout << "Los 100 primeros numeros enteros a partir de " << valor << " hacia el infinito negativo son:" << endl;
    for (int i = 0; i < 100; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;
    return 0;
}