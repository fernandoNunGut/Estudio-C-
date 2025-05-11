/*
La academia de idiomas abre las postulaciones durante enero. La alta demanda ha obligado a realizar
una seleccion de postulantes basado en criterios economicos, de conocimientos (lengua, matematicas e
historia) y de salud.

(1) Si el postulante paga el arancel anual completo cuando postula, la admision se realiza de manera
    directa (estado admitido).
    Su puntaje promedio en las pruebas de conocimiento sea inferior a 20, en cuyo caso la postulacion es rechazada (estado rechazado).

(2) Si el postulante no paga el arancel por adelantado, pero ha obtenido un puntaje promedio superior
    a 95 puntos en las pruebas de conocimiento, se le considera admitido y se le otroga una beca de
    arancel (estado becado)

(3) Si el postulante obtiene un puntaje promedio de entre 60 y 95, independiente de la situacion del
    pago de arancel, se le considera en lista de espera (estado pendiente).

Las pruebas de salud determinan si el postulante cumple los requisitos mınimos para poder
desarrollar las actividades academicas. 
Los resultados pueden ser excelente (E), bueno (E), 
mejorable (M) y deficiente (D). 

(a1) Si el resultado es deficiente, la postulacion es rechazada independiente de
     cualquier otro criterio (estado rechazado). 
(a2) Si el resultado es mejorable, solo se consideraran las
     postulaciones de quienes han pagado el arancel completo o de quienes han obtenido un promedio
     superior a 95. 

En ambos casos, el postulante tendra que ver un equipo medico (estado evaluacion).
Considere cualquier caso no especificado como rechazado.

Construya un programa que permita determinar el estado de una postulacion.
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//(1) Definicion de constantes
const int MAX_POSTULANTES = 100; // Maximo de postulantes

//(2) Definicion de variables
struct Postulante {
    string nombre;
    float puntajeLengua;
    float puntajeMatematicas;
    float puntajeHistoria;
    char Salud; // E, B, M, D
    bool pagoArancel;
};

enum Estado { ADMITIDO, RECHAZADO, BECADO, PENDIENTE, EVALUACION };
// (3) Prototipos de funciones
void ingresarDatos(Postulante& postulante){
    cout << "Ingrese el nombre del postulante: ";
    getline(cin, postulante.nombre);
    cout << "Ingrese el puntaje de lengua: ";
    cin >> postulante.puntajeLengua;
    cout << "Ingrese el puntaje de matematicas: ";
    cin >> postulante.puntajeMatematicas;
    cout << "Ingrese el puntaje de historia: ";
    cin >> postulante.puntajeHistoria;
    cout << "Ingrese el resultado de salud (E, B, M, D): ";
    cin >> postulante.Salud;
    postulante.Salud = toupper(postulante.Salud);
    cin.ignore(); // Limpiar el buffer de entrada 
};

void calcularEstado(const Postulante& postulante, Estado& estado){
    float promedio = (postulante.puntajeLengua + postulante.puntajeMatematicas + postulante.puntajeHistoria) / 3.0;

    // Revicion salud
    if (postulante.Salud == 'D') {
        estado = RECHAZADO;
        return;
    } else if (postulante.Salud == 'M'){
        if(postulante.pagoArancel || promedio > 95){
            estado = EVALUACION;
            return;
        }else{
            estado = RECHAZADO;
            return;
        }
    } else if (postulante.Salud == 'E' || postulante.Salud == 'B') {
        if(postulante.pagoArancel){
            if(promedio < 20){
                estado = RECHAZADO;
            }else {
                estado = ADMITIDO;
            }
        }else{
            if(promedio > 95){
                estado = BECADO;
            }else if(promedio >= 60 && promedio <= 95){
                estado = PENDIENTE;
            }else{
                estado = RECHAZADO;
            }
        }
    }
};

void mostrarEstado(const Postulante& postulante, const Estado& estado){
    cout << "Nombre: " << postulante.nombre << "- Estado: ";

    switch(estado) {
        case ADMITIDO: cout << "Admitido"; break;
        case RECHAZADO: cout << "Rechazado"; break;
        case BECADO: cout << "Becado"; break;
        case PENDIENTE: cout << "Pendiente"; break;
        case EVALUACION: cout << "En evaluacion medica"; break;
    }
    cout << endl;
};

void mostrarResultados(const Postulante postulantes[], const Estado estados[], int numPostulantes){
    cout << "\n--- RESULTADO DE POSTULACIONES ---\n";
    for(int i = 0; i < numPostulantes; i++) {
        mostrarEstado(postulantes[i], estados[i]);
    }
};

void mostrarMenu(){
    cout << "\n--- MENU DE POSTULACIONES ---\n";
    cout << "1. Ingresar nuevo postulante\n";
    cout << "2. Mostrar resultados\n";
    cout << "0. Salir\n";
    cout << "Seleccione una opción: ";
};

void mostrarPostulante(const Postulante& postulante, const Estado& estado){
    cout << "Nombre: " << postulante.nombre << endl;
    cout << "Promedio de conocimiento: " << (postulante.puntajeLengua + postulante.puntajeMatematicas + postulante.puntajeHistoria) / 3.0 << endl;
    cout << "Salud: " << postulante.Salud << endl;
    cout << "Pago de arancel: " << (postulante.pagoArancel ? "Si" : "No") << endl;
    mostrarEstado(postulante, estado);
};

void mostrarPostulantes(const Postulante postulantes[], const Estado estados[], int numPostulantes){
    for (int i = 0; i < numPostulantes; i++){
        mostrarPostulante(postulantes[i], estados[i]);
        cout << "------------------------" << endl;
    }
    
};

// Funcion principal
int main() {
    Postulante postulantes[MAX_POSTULANTES];
    Estado estados[MAX_POSTULANTES];
    int numPostulantes = 0;
    int opcion;

    do
    {
        mostrarMenu();
        cin >> opcion;
        cin.ignore(); // Limpiar el buffer de entrada

        switch (opcion) {
            case 1:
                if (numPostulantes < MAX_POSTULANTES) {
                    ingresarDatos(postulantes[numPostulantes]);
                    calcularEstado(postulantes[numPostulantes], estados[numPostulantes]);
                    numPostulantes++;
                } else
                {
                    cout << "Se alcanzo el maximo de postulantes." << endl;
                }
                break;
            case 2:
                mostrarResultados(postulantes, estados, numPostulantes);
                break;
            case 0:
                cout << "Saliendo del programa." << endl;
                break;
            default:
                cout << "Opcion no valida" << endl;
                break;
        }
    } while (opcion != 0);
    return 0;
}