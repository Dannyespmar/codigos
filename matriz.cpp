//clase

#include <iostream>
using namespace std;

// declaramos funciones
// void suma_matriz(int matriz[5][4],int filas, int columnas);
//  funcion sumatoria
int suma_matriz(int matriz_suma[5][4], int fila, int columna)
{
    int suma = 0;
    for (int i = 0; i < fila; i++)
    {
        for (int j = 0; j < columna; j++)
        {
            suma += matriz_suma[i][j]; // suma = suma + matriz_suma[i][j];
        }
    }
    return suma;
}
// funcion para mostrar matriz
void imprimir_matriz(int matriz_mostrar[5][4], int filas, int columnas)
{
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << "\t" << matriz_mostrar[i][j];
        }
        cout << "\n";
    }
}

int main()
{
    // declaramos una matriz de 5*4

    int matriz[5][4] = {{2, 3, 4, 5}, {6, 7, 8, 9}, {10, 11, 12, 13}, {14, 15, 16, 17}, {18, 19, 20, 21}};

    cout << matriz[2][4];
    cout << "\n";
    cout << matriz[3][0];
    cout << "\n";
    cout << matriz[5][4] << "\n";

    imprimir_matriz(matriz, 5, 4);
    int sum = suma_matriz(matriz, 5, 4);
    cout << "la suma es:" << sum;
    return 0;