//ARREGLO NUM ALEATORIO CLASE

#include <iostream>
using namespace std;

int main() {
  int a[10] = {1,2,3,4,5,6,7,8,9,10};
  int tamaño = sizeof(a)/ sizeof(a[0]);
  cout<<"\n"<<tamaño;
//valor maximo de manera dinamica
  for(int i=0; i<tamaño;i++){
    //cout<<"\n"<<"el valor se repite: "<<i;
    cout<<"\n"<<"el valor del vecto a["<<i<<"]"<< a[i];
  }

//numero menor
  int menor = a[0];

    for (int i = 1; i < tamaño; i++)
    {
        if (a[i] < menor)
        {
            menor = a[i]; // actualizamos el valor del menor
        }
    }

    cout << "el numero menor es: " << menor;
    
  return 0;
}