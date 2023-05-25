//PRODUCTOS ARREGLOS

#include <iostream>
#include <string>
using namespace std;

int main() {
    string productos[5] = {"producto1", "producto2", "producto3", "producto4", "producto5"};

    // Reemplazar el producto en la posición 3 con la palabra computadora
    productos[2] = "computadora";

    // poner el arreglo actualizado
    for (int i = 0; i < 5; i++) {
        cout << productos[i] << " ";
    }
    cout << endl;

    return 0;
}