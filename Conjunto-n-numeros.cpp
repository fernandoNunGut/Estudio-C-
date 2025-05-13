/*
Cree un programa que permita al usuario ingresar por la terminal un conjunto de n numeros reales (R).
Implemente un menu que permita al usuario realizar las siguientes acciones:

(a) Calcular el promedio de todos los numeros e imprimirlo por terminal.
(b) Buscar el mayor valor entre los numeros e imprimirlo por terminal.
(c) Contar la cantidad de numeros negativos en el conjunto e imprimirla por terminal.
Los numeros del conjunto deben ser ingresados a trav´es del terminal. Fije el valor de n en diez. ¿De que
manera se podrıa hacer a este valor variable?
Page
*/

#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <limits>

using namespace std;


void imprimirMenu() {
    cout << "\n--- Menú de Opciones ---" << endl;
    cout << "1. Calcular promedio" << endl;
    cout << "2. Buscar mayor valor" << endl;
    cout << "3. Contar números negativos" << endl;
    cout << "4. Salir" << endl;
    cout << "Seleccione una opción (1-4): ";
}

void calcularPromedio(const vector<double>& numeros) { // const(no modifica el vector) vector<double>(vector de numeros reales) &(se pasa por referencia)
    double suma = 0; // Inicializa la suma en 0
    for (double num : numeros) { // Recorre el vector de numeros ( uno por uno con el for asignando el valor a num)
        suma += num; // Suma cada numero al total Ej: (0 + 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 = 45) almacena el resultado en suma y suma el siguiente valor de nuemeros
    }
    double promedio = suma / numeros.size(); // Calcula el promedio dividiendo la suma entre la cantidad de numeros [.size() devuelve la cantidad de elementos en el vector]
    cout << "El promedio es: " << fixed << setprecision(2) << promedio << endl; // Muestra el promedio con 2 decimales fixed ( fija la cantidad de decimales) y setprecision(2) (indica la cantidad de decimales a 2)
}

void buscarMayorValor(const vector<double>& numeros) { // const(no modifica el vector) vector<double>(vector de numeros reales) &(se pasa por referencia)
    double mayor = numeric_limits<double>::lowest();  // Inicializa el mayor con el valor más bajo posible para un double numeric_limits<double>::lowest() (es una clase que proporcina informacion sobre los limites de los tipos de datos)
    for (double num : numeros) {
        if (num > mayor) {
            mayor = num;
        }
    }
    cout << "El mayor valor es: " << fixed << setprecision(2) << mayor << endl;
}