

#include <iostream>

using namespace std;

int suma(int num1, int num2) {
    return num1 + num2;
}

int resta(int num1, int num2) {
    return num1 - num2;
}

int multiplicacion(int num1, int num2) {
    if (num2 == 0) {
        cout << "Error: no se puede dividir por cero." << endl;
        return 0;
    } else {
        return num1 * num2;
    }
}

int division(int num1, int num2) {
    if (num2 == 0) {
        cout << "Error: no se puede dividir por cero." << endl;
        return 0;
    } else {
        return num1 / num2;
    }
}

int main() {
    int num1, num2;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    cout << "La suma de los numeros es: " << suma(num1, num2) << endl;
    cout << "La resta de los numeros es: " << resta(num1, num2) << endl;
    cout << "La multiplicacion de los numeros es: " << multiplicacion(num1, num2) << endl;
    cout << "La division de los numeros es: " << division(num1, num2) << endl;
    return 0;
}
