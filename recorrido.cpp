//ARREGLO Y RECORRIDO

#include <iostream>
#include <string>

using namespace std;

int main() {
    // Declaracion del arreglo de 5 libros
    string libros[5];

    // Recorrido para ingresar los libros
    for (int i = 0; i < 5; i++) {
        cout << "Ingrese el nombre del libro " << i+1 << ": ";
        getline(cin, libros[i]);
    }

    // Impresion del arreglo de libros
    cout << "Los libros ingresados son: ";
    for (int i = 0; i < 5; i++) {
        cout << libros[i] << ", ";
    }

    return 0;
}
