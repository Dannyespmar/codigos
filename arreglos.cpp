//ARREGLOS

#include <iostream>
using namespace std;

int main() {
  int a[3];
  a[0] = 1;
  a[1] = 2;
  a[2] = 3;
  
  string nombres[] = {"Hugo", "Paco", "Luis", "Juanito", "Cesar"};
  cout << nombres[3]<<"\n";
  nombres[1]="Clara";
  cout<<nombres[1];
  cout<<"\n"<<a[2] ;}

for(int i=0; i<3;i++){
    cout<<"\n"<<"el valor se repite: "<<i;
    cout<<"\n"<<"el valor del vecto a["<<i<<"]"<< a[i];
  }
  //valor maximo esta de manera estatica
  for(int i=0; i<5;i++){
    cout<<"\n"<<"el valor se repite: "<<i;
    cout<<"\n"<<"el valor del vecto nombres["<<i<<"]"<< nombres[i];
int tamaño = sizeof(a)/ sizeof(a[0]);
  int tamaño2 = sizeof(nombres)/ sizeof(nombres[0]);
  cout<<"\n"<<tamaño;
  cout<<"\n"<<tamaño2;
//valor maximo de manera dinamica
  for(int i=0; i<tamaño;i++){
    cout<<"\n"<<"el valor se repite: "<<i;
    cout<<"\n"<<"el valor del vecto a["<<i<<"]"<< a[i];
  }

  for(int i=0; i<tamaño2;i++){
    cout<<"\n"<<"el valor se repite: "<<i;
    cout<<"\n"<<"el valor del vecto nombres["<<i<<"]"<< nombres[i];
  }
  int tamaño = sizeof(a);
  int tamano = sizeof(a) / sizeof(a[0]);
  cout<<"\n"<<tamano;


  return 0;
}