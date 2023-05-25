tarea dia jueves

#include <iostream>
using namespace std;

int main() {
    int arr[5];
    int mayor = arr[0], menor = arr[0], suma = 0, frec = 1, moda = arr[0], temp;
    float promedio, media;

    // Ingreso de valores por teclado
    for(int i=0; i<5; i++) {
        cout << "Ingrese un valor para la posicion " << i << ": ";
        cin >> arr[i];

        // Cálculo de suma
        suma += arr[i];

        // Cálculo de mayor y menor
        if(arr[i] > mayor) mayor = arr[i];
        if(arr[i] < menor) menor = arr[i];

        // Cálculo de moda
        for(int j=i+1; j<5; j++) {
            if(arr[i] == arr[j]) {
                frec++;
            }
        }
        if(frec > temp) {
            temp = frec;
            moda = arr[i];
        }
        frec = 1;
    }

    // Cálculo de promedio
    promedio = (float)suma / sizeof(arr);

    // Cálculo de media
    media = (float)(arr[2] + arr[3]) / 2;

    // Ordenamiento de mayor a menor
    for(int i=0; i<5; i++) {
        for(int j=i+1; j<5; j++) {
            if(arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Impresión de resultados
    cout << "El número mayor es: " << mayor << endl;
    cout << "El número menor es: " << menor << endl;
    cout << "El número que se repite es: " << moda << endl;
    cout << "Se repite " << temp << " veces" << endl;
    cout << "La suma de los valores es: " << suma << endl;
    cout << "El arreglo ordenado de mayor a menor es: ";
    for(int i=0; i<5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    // Ordenamiento de menor a mayor
    for(int i=0; i<5; i++) {
        for(int j=i+1; j<5; j++) {
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "El arreglo ordenado de menor a mayor es: ";
    for(int i=0; i<5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "El promedio es: " << promedio << endl;
    cout << "La media es: " << media << endl;

    // Reemplazo de valor en la posición media
    arr[2] = 25;
    cout << "El arreglo con la posición media reemplazada por 25 es: ";
    for(int i=0; i<5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
