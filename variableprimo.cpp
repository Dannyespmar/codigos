//VARIABLE //PRIMO-FALSO

#include <iostream>
using namespace std;

int main() {
    int x = 5;                       // Se define la variable "x" y se le asigna el valor 5
    int* p = &x;                     // Se crea un puntero "p" que apunta a la dirección de memoria de "x"
    *p = 53;                         // Se asigna el valor 53 a través del puntero "p"
    bool es_primo = true;            // Se inicializa la variable "es_primo" como verdadera
    for (int i = 2; i < x; i++) {    // int desde 2 hasta "x-1" para verificar si "x" es divisible por algún nummero
        if (x % i == 0) {            // Si "x" es divisible por "i", entonces no es primo
            es_primo = false;        // Se actualiza la variable "es_primo" a falso
            break;                  // Se sale del ciclo
        }
    }
    if (es_primo) {                  // Si la variable "es_primo" sigue siendo verdadera, entonces "x" es primo
        cout << "El numero es primo" << endl;
    } else {
        cout << "El numero no es primo" << endl;
    }
    cout << "Direccioon de memoria: " << p << endl;  // Se imprime la dirección de memoria de la variable "x" a través del puntero "p"
    return 0;
}
