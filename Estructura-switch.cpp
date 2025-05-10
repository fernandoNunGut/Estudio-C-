/*
Estructura switch. 
    (a) Cree un progtama que reciba un mes expresado como un número ( 1 al 12) e informe el nombre del mes. 

    (b) Cree un programa calculadora que sea capaz de sumar, restar, multiplicar y comprar dos númeoros enteros ingresados a través del teclado. La selección debe ser realizada mediante un código ingresado por la terminal ( se sugiere armar un menú de operaciones al inicio del porgrama). 

*/

#include <iostream>
using namespace std;


// (a) Cree un progtama que reciba un mes expresado como un número ( 1 al 12) e informe el nombre del mes.

void mesDelYear(){
    int mes;
    cout << "Ingrese un mes (1-12): ";
    cin >> mes;

    switch (mes)
    {
    case 1:
        cout << "Enero" << endl;
        break;
    case 2:
        cout << "Febrero" << endl;
        break;
    case 3:
        cout << "Marzo" << endl;
        break;
    case 4:
        cout << "Abril" << endl;
        break;          
    case 5:
        cout << "Mayo" << endl;
        break;  
    case 6:
        cout << "Junio" << endl;
        break;
    case 7:
        cout << "Julio" << endl;
        break;                  
    case 8:
        cout << "Agosto" << endl;
        break;      
    case 9:
        cout << "Septiembre" << endl;
        break;  
    case 10:                
        cout << "Octubre" << endl;
        break;
    case 11:
        cout << "Noviembre" << endl;
        break;
    case 12:
        cout << "Diciembre" << endl;
        break;
    default:
        cout << "Mes no valido. Ingrese un numero entre 1 y 12." << endl;
        break;
    }
}

// (b) Cree un programa calculadora que sea capaz de sumar, restar, multiplicar y comprar dos númeoros enteros ingresados a través del teclado. La selección debe ser realizada mediante un código ingresado por la terminal ( se sugiere armar un menú de operaciones al inicio del porgrama).

void calculadora() {
    int num1, num2, resultado;
    char operacion;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    cout << "Seleccione la operacion (+, -, *, /): ";
    cin >> operacion;
    switch(operacion) {
        case '+':
            resultado = num1 + num2;
            cout << "Resultado: " << resultado << endl;
            break;
        case '-':
            resultado = num1 - num2; 
            cout << "Resultado: " << resultado << endl;
            break;
        case '*': 
            resultado = num1 * num2;
            cout << "Resultado: " << resultado << endl;
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                cout << "Resultado: " << resultado << endl;
            } else {
                cout << "Error: Division por cero." << endl;
            }
            break;
        default:
            cout << "Operacion no valida." << endl;
            break;
    }
}


int main() {
    // (a) mesDelYear();
    mesDelYear();
    // (b) calculadora();
    calculadora();
    return 0;
}