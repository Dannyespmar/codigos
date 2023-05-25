//ARREGLO VALmax

#include <iostream>

using namespace std;

int main() {
    const int n = 5; // Tamanio del arreglo
    float precios[n]; // Declaracion del arreglo de precios

    // Recorrido para ingresar los precios
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el precio del producto " << i+1 << ": ";
        cin >> precios[i];
    }

    // Impresion del arreglo de precios
    cout << "Los precios ingresados son: ";
    for (int i = 0; i < n; i++) {
        cout << precios[i] << " ";
    }
    cout << endl;

// Calculo del valor maximo y del undice del valor maximo
    float max_valor = precios[0];
    int max_indice = 0;
    for (int i = 1; i < n; i++) {
        if (precios[i] > max_valor) {
            max_valor = precios[i];
            max_indice = i;
        }
    }

    // Impresion del valor maximo y del indice del valor maximo
    cout << "El valor maximo es " << max_valor << " y se encuentra en el indice " << max_indice << endl;

    return 0;
}