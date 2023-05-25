//FOR MEJORADO CLASE

////////////////////////////////////


#include <iostream>
using namespace std;

int main()
{
    int a[] = {0, 5, 3, 20, 15, 3, 35, 45, -1, 3};
    int tamaño = sizeof(a) / sizeof(a[0]);
    cout << "\n"
         << tamaño;
    // valor maximo de manera dinamica
    for (int i = 0; i < tamaño; i++)
    {
        // cout<<"\n"<<"el valor se repite: "<<i;
        cout << "\n"
             << "el valor del vecto a[" << i << "]" << a[i] << "\n";
    }

    int menor = a[0];

    for (int i = 1; i < tamaño; i++)
    {
        if (a[i] < menor)
        {
            menor = a[i]; // actualizamos el valor del menor
        }
    }

    // numero mayor
    int mayor = a[0];

    for (int i = 1; i < tamaño; i++)
    {
        if (a[i] > mayor)
        {
            mayor = a[i]; // actualizamos el valor del menor
        }
    }
    // numero igual_ mal diseñado
    int numero_igual = 0;
    /*
        for (int i = 1; i < tamaño; i++)
        {
            if (a[i] == numero_igual)
            {
                numero_igual = a[i]; // actualizamos el valor del menor
            }
        }
        */
    // numero igual mejorado
    for (int i = 0; i < tamaño; i++)
    {
        int numero_igual_temp = a[i];
        for (int y = 0; y < tamaño; y++)
        {
            if (numero_igual_temp == a[y])
            {
                numero_igual = a[y];
            }
        }
    }
    cout << "el numero menor es: " << menor << "\n";
    cout << "el numero mayor es: " << mayor << "\n";
    cout << "el numero igual es: " << numero_igual << "\n";

    return 0;
}
