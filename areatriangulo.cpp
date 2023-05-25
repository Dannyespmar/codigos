//AREA DEL TRIANGULO

#include <iostream>
using namespace std;

int main() {
    float base, altura, area;

    // Pedir la base y la altura del triángulo al usuario
    cout << "Introduce la base del triángulo: ";
    cin >> base;
    cout << "Introduce la altura del triángulo: ";
    cin >> altura;

    // Calcular el área del triángulo
    area = (base * altura) / 2;

    // Mostrar el resultado al usuario
    cout << "El área del triángulo es: " << area << endl;

    return 0;
}
