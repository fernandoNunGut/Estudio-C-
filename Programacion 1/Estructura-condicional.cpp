/*
Estructura condicional ( if - else if - else).
    (a) Cree un programa que compruebe si una variable booleana ese verdaderra o falsa.
    (b) Cree un programa que reciba un valor numérico a través del terminal e indique, a través del mismo medio, si se trata de un número positivo o número negativo.
    (c) Modifique el programa anterior para que se considere al cero como una tervera categoria.
    (d) Un ángulo geométrico puede clasificarse como acuerdo a su valor en grados sexagesimales como aparece en la figura. 1. Cree un programa que reciba el valor de un ángulo a través de la terminal, y que imprima por el mismo medio su clasificasión.

*/





#include <iostream>

using namespace std;


// (a) Cree un programa que compruebe si una variable booleana ese verdaderra o falsa.

void booleano(){
    bool b = true;
    if (b) {
        cout << "La variable booleana es verdadera." << endl;
    } else {
        cout << "La variable booleana es falsa." << endl;
    }
}
// (b) Cree un programa que reciba un valor numérico a través del terminal e indique, a través del mismo medio, si se trata de un número positivo o número negativo.

void numeroPositivoNegativo(){
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;
    if (num > 0) {
        cout << "El numero es positivo." << endl;
    }else if (num < 0) { 
        cout << "El numero es negativo." << endl;
    }else {
        cout << "El numero es cero." << endl;
    }
}

// (c) Modifique el programa anterior para que se considere al cero como una tervera categoria.

void numeroPositivoNegativoAndZero(){
    int num1;
    cout << "Ingrese un numero: ";
    cin >> num1;
    if (num1 > 0 ) {
        cout << "El numero es positivo." << endl;
    }else if (num1 < 0) {
        cout << "El numero es negativo." << endl;
    }else if (num1 == 0 ){
        cout << "El numero es cero." << endl;
    }else{
        cout << "El numero no es un numero valido." << endl;
    }
    
}

// (d) Un ángulo geométrico puede clasificarse como acuerdo a su valor en grados sexagesimales como aparece en la figura. 1. Cree un programa que reciba el valor de un ángulo a través de la terminal, y que imprima por el mismo medio su clasificasión.

void anguloGeometrico(){
    int angulo;
    cout << "Ingrese el valor del angulo en grados: ";
    cin >> angulo;

    if( angulo > 0 && angulo < 90) {
        cout << "El angulo es agudo." << endl;
    }else if (angulo == 90) {
        cout << "El angulo es recto." << endl;
    }else if (angulo > 90 && angulo < 180){
        cout << "El angulo es obtuso." << endl;
    }else if (angulo == 180) {
        cout << "El angulo es llano." << endl;
    }else if (angulo > 180 && angulo < 360) {
        cout << "El angulo es cóncavo." << endl;
    }else if (angulo == 360) {
        cout << "El angulo es completo." << endl;  
    }else {
        cout << "El angulo no es valido." << endl;
    }
}



int main () {
    // (a) booleano();
    booleano(); 
    // (b) numeroPositivoNegativo();
    numeroPositivoNegativo();
    // (c) numeroPositivoNegativoAndZero();
    numeroPositivoNegativoAndZero();
    // (d) anguloGeometrico();
    anguloGeometrico();
    return 0;
}