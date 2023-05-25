//VARIABLEXVALOR 5

#include <iostream>
using namespace std;

int main() {
    int x = 5;                       // Se define la variable "x" y se le asigna el valor 5
    int* direccion_memoria = &x;     // Se obtiene la dirección de memoria de la variable "x" y se almacena en un puntero
    bool es_primo = true;            // Se inicializa la variable "es_primo" como verdadera
    for (int i = 2; i < x; i++) {    // Se itera desde 2 hasta "x-1" para verificar si "x" es divisible por algún número
        if (x % i == 0) {            // Si "x" es divisible por "i", entonces no es primo
            es_primo = false;        // Se actualiza la variable "es_primo" a falso
            break;                  // Se sale del ciclo
        }
    }
    if (es_primo) {                  // Si la variable "es_primo" sigue siendo verdadera, entonces "x" es primo
        cout << "El nuumero es primo" << endl;
    } else {
        cout << "El numero no es primo" << endl;
    }
    cout << "DirecciOn de memoria: " << direccion_memoria << endl;  // Se imprime la dirección de memoria de la variable "x"
    return 0;
}