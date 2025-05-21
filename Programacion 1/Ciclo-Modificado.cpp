/*
Ejercicio 3: 
{
    Ciclos (for- while- do while)
    (a) Cree un programa que liste los 20 primeros números naturales(N). Pruebe las diferentes estructuras para ciclos. 

    (b) Cree un programa sin fin (el programa no termina a menos que sea interrumpido) que, una vez iniciado, solo impirma unos y ceros. 

    (c) Cree un programa que reciba por la terminal un número e imprima los 50 números pares a partir del numero ingresado. 
}
#include <iostream>
using namespace std;

// (a) Cree un programa que liste los 20 primeros números naturales(N). Pruebe las diferentes estructuras para ciclos.


void listaNumerosNaturales(){
    // Usando for
    cout << "Usando for:" << endl;
    for (int i = 1; i <= 20; i++) { 
        cout << i << " ";
    }
    cout << endl;
    // Usando while
    cout << "Usando while:" << endl;
    int i = 1;
    while (i <= 20) {
        cout << i << " ";
        i++;
    }
    cout << endl;
    // Usando do while
    cout << "Usando do while:" << endl;
    int j = 1;
    do {
        cout << j << " ";
        j++;
    }
    while (j <= 20);
    cout << endl;
}


// (b) Cree un programa sin fin (el programa no termina a menos que sea interrumpido) que, una vez iniciado, solo impirma unos y ceros.
void imprimirUnosCeros() {
    while (true) {
        cout << "1 ";
        cout << "0 ";
    }
}


// (c) Cree un programa que reciba por la terminal un número e imprima los 50 números pares a partir del numero ingresado.

void imprimirParesDesdeNumero(int numero) {
    cout << "Los 50 númeoros pares a aprtir del numero " << numero << "son: " << endl;
    for (int i = 0 ; i < 50; i++) {
        cout << (numero + i) * 2 << " ";
    }
    cout << endl;
}


-------------------------------------------------------------------------------------------------------
Tome un programa creado para el ejercicio 3 y modif´ıquelo de tal forma de que la lista que se imprima
tenga las siguientes condiciones
Se deben mostrar solo los n´umeros pares.
La lista debe imprimirse hacia la derecha, con un gui´on corto entre cada d´ıgito: “2 - 4 - 6 - 8 - ... -
20”.
-----------------------------------------------------------------------------------------------------------
*/


#include <iostream>
using namespace std;

void imprimirParesDesdeNumero(int numero) {
    cout << "Los 50 números pares a partir del número " << numero << " son: " << endl;
    for (int i = 0; i < 50; i++) {
        cout << (numero + i) * 2;
        if (i < 49) { // Evitar el guion después del último número
            cout << " - ";
        }
    }
    cout << endl;
}

int main() {
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    imprimirParesDesdeNumero(numero);
}