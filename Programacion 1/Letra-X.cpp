/*
Cree un programa que pida al usuario ingresar una letra por terminal. El programa se debe ejecutar
eternamente a menos que se ingrese la letra “X” (may´uscula), en cuyo caso se debe desplegar el mensaje
“Usted ha salido del programa”. Se sugiere el uso de un ciclo y un condicional.
*/

#include <iostream>

using namespace std;

int main() {

    char letra; 
    
    //ciclo infinito
    while(true) {
        cout << "Ingrese una Letra: ";
        cin >> letra;

        //condicional
        if (letra == 'X') {
            cout << "usted ha salido del programa" << endl;
            break; // salir del ciclo
        } else {
            cout << "La letra ingresada es: " << letra << endl; 
        }
    }

    return 0;
}