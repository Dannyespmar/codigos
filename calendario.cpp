//CALENDARIO

#include <iostream>
using namespace std;

int main() {
    int num_mes;

    // Pedir al usuario un número del 1 al 12
    cout << "Ingrese un número del 1 al 12: ";
    cin >> num_mes;

    // Imprimir el nombre del mes correspondiente
    switch(num_mes) {
        case 1:
            cout << "Enero" << endl;
            break;
        case 2:
            cout << "Febrero" << endl;
            break;
        case 3:
            cout << "Marzo" << endl;
            break;
        case 4:
            cout << "Abril" << endl;
            break;
        case 5:
            cout << "Mayo" << endl;
            break;
        case 6:
            cout << "Junio" << endl;
            break;
        case 7:
            cout << "Julio" << endl;
            break;
        case 8:
            cout << "Agosto" << endl;
            break;
        case 9:
            cout << "Septiembre" << endl;
            break;
        case 10:
            cout << "Octubre" << endl;
            break;
        case 11:
            cout << "Noviembre" << endl;
            break;
        case 12:
            cout << "Diciembre" << endl;
            break;
        default:
            cout << "El número ingresado no es válido" << endl;
            break;
    }

    return 0;
}
