/*
Cree un programa que reciba una cantidad de tiempo x en segundos y la transforme a la mayor unidad
de tiempo posible bajo el siguiente criterio:
Si x ∈ [0, 60[ el valor se expresa en segundos
Si x ∈ [60, 3600[ el valor se expresa en minutos
Si x ∈ [3600, 86400[ el valor se expresa en horas
Si x ∈ [86400,−∞[ el valor se expresa en dias.
La respuesta tiene que contener la unidad de medida.
*/


#include <iostream>

using namespace std;


int main() {
    int tiempo;
    cout << "Ingrese la cantidad de tiempo en segundos: ";
    cin >> tiempo;

    if (tiempo < 0) {
        cout << "El tiempo no puede ser negativo." << endl;
    } else if (tiempo < 60) {
        cout << tiempo << " segundos" << endl;
    } else if (tiempo < 3600) {
        cout << tiempo / 60 << " minutos" << endl;
    } else if (tiempo < 86400) {
        cout << tiempo / 3600 << " horas" << endl;
    } else {
        cout << tiempo / 86400 << " dias" << endl;
    }
    return 0;
}