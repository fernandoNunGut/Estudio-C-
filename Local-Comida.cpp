/*
Un local de comida ofrece ocho almuerzos diferentes para llevar. Cree un programa que imprima el menu
por la terminal y que tambien permita al usuario escoger su pedido. Utilice Switch para el desarrollo
del programa. Los platos que se ofrecen quedan a su eleccion.
*/


#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

void imprimirMenu() {
    cout << "\n--- Menú de Almuerzos ---" << endl;
    cout << "1. Ensalada Caesar" << endl;
    cout << "2. Hamburguesa con Papas" << endl;
    cout << "3. Pollo Asado" << endl;
    cout << "4. Pizza Margarita" << endl;
    cout << "5. Tacos de Pollo" << endl;
    cout << "6. Sushi Variado" << endl;
    cout << "7. Pasta Alfredo" << endl;
    cout << "8. Sopa de Verduras" << endl;
    cout << "Seleccione su almuerzo (1-8): ";
}

int main() {
    int opcion;
    bool continuar = true;

    string almuerzos[8] = {
        "Ensalada Caesar",
        "Hamburguesa con Papas",
        "Pollo Asado",
        "Pizza Margarita",
        "Tacos de Pollo",
        "Sushi Variado",
        "Pasta Alfredo",
        "Sopa de Verduras"
    };

    vector<string> pedidos; // Guardar múltiples pedidos

    while (continuar) { // miestras (continuar == true) se repite el menú
        cout << "\n--- Bienvenido al Local de Comida ---" << endl;
        imprimirMenu(); // se imprime el menú
        cin >> opcion; // se guarda la opción elegida por el usuario

        switch (opcion) { // se evalua la opción elegida 1, 2, 3, 4, 5, 6, 7 u 8
            case 1: case 2: case 3: case 4:
            case 5: case 6: case 7: case 8:
                pedidos.push_back(almuerzos[opcion - 1]); // se agrega el almuerzo elegido al vector de pedidos
                cout << "Agregado: " << almuerzos[opcion - 1] << endl;
                break;
            default:
                cout << "Opción no válida. Elija un número del 1 al 8." << endl;
                continue; // Repite el menú
        }

        char respuesta;
        cout << "¿Desea añadir otro plato? (s/n): ";
        cin >> respuesta;

        if (respuesta != 's' && respuesta != 'S') {
            continuar = false;
        }
    }

    // Imprimir resumen del pedido
    if (!pedidos.empty()) {
        cout << "\n--- Resumen de su pedido ---" << endl;
        for (size_t i = 0; i < pedidos.size(); ++i) {
            cout << i + 1 << ". " << pedidos[i] << endl;
        }
    } else {
        cout << "\nNo ha realizado ningún pedido." << endl;
    }

    cout << "¡Gracias por su pedido! 😊" << endl;

    return 0;
}
