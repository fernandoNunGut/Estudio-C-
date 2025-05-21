/*
(a) Escriba una funci´on que reciba una nota de 1.0 a 7.0, y retorne verdadero en caso de aprobaci´on,
o falso en el caso contrario. La nota m´ınima de aprobaci´on est´a definida como 4.0.

(b) Cree una funci´on que transforme grados Celsius (°C) a kelvin (K).

(c) Cree una funci´on que transforme horas en minutos. Incluya en el interior de la funci´on los mecanismos
necesarios para determinar si se ha ingresado un valor de hora inadmisible.

(d) Cree una funci´on que imprima por pantalla el mensaje “Hola mundo”.

1 // Lista de funciones
2 bool aprobacion ( float nota ); //(a)
3 float celsius_kelvin ( float temperatura ); //(b)
4 int horas_to_minutos ( int horas ); //(c) horas invalidas deben retornar -1
5 void hola_mundo (); //(d)
Declaraci´on de funciones
*/




#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;


// (a) Función que verifica si la nota es aprobada 
bool aprobacion(float nota) {
    if (nota >= 1.0 && nota <= 7.0) { // Verifica si la nota está en el rango válido
        return nota >= 4.0; // Retorna verdadero si la nota es mayor o igual a 4.0 
    } else {
        cout << "Nota inválida. Debe estar entre 1.0 y 7.0 " << endl; 
    }
}

// (b) Función que convierte grados Celsius a Kelvin
float celsius_kelvin(float temperatura) {
    if (temperatura < -273.15) {
        cout << "Temperatura inválida. Debe ser mayor que -273.15 °C" << endl;
        return -1;
    } else {
        return temperatura + 273.15;
    }
}


// (c) Función que convierte horas a minutos
int horas_to_minutos(int horas) {
    if (horas < 0) {
        cout << "Horas inválidas. Deben ser mayores o iguales a 0" << endl;
        return -1;
    } else {
        return horas * 60;
    }
}


// (d) Función que imprime "Hola mundo"
void hola_mundo() {
    cout << "Hola mundo" << endl;
}

int main() {
    float nota;
    cout << "Ingrese una nota (1.0 a 7.0): ";
    cin >> nota;

    if (aprobacion(nota)) {
        cout << "Aprobado" << endl;
    } else {
        cout << "Reprobado" << endl;
    }
    
    float temperatura;
    cout << "Ingrese temperatura en Celsius: ";
    cin >> temperatura;

    float kelvin = celsius_kelvin(temperatura);
    if (kelvin != -1) {
        cout << "Temperatura en kelvin: " << fixed << setprecision(2) << kelvin << " K" << endl;
    } 

    int horas;
    cout << "Ingrese horas: ";
    cin >> horas;
    int minutos = horas_to_minutos(horas);
    if (minutos != -1) {
        cout << "Horas en minutos: " << minutos << " minutos" << endl;
    } 

    hola_mundo(); // Llama a la función que imprime "Hola mundo"
    return 0;
}