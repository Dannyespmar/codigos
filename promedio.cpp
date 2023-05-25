//PROMEDIO

#include <iostream>
#include <string>

using namespace std;

int main() {
  float nota1, nota2, nota3, promedio;
  string letra;

  cout << "Ingrese la primera nota: ";
  cin >> nota1;
  cout << "Ingrese la segunda nota: ";
  cin >> nota2;
  cout << "Ingrese la tercera nota: ";
  cin >> nota3;

  promedio = (nota1 + nota2 + nota3) / 3.0;

  if (promedio <= 20 && promedio > 18) {
    letra = "A";
  } else if (promedio <= 18 && promedio > 15) {
    letra = "B";
  } else if (promedio <= 15 && promedio > 13) {
    letra = "C";
  } else if (promedio <= 13 && promedio >= 10.5) {
    letra = "D";
  } else if (promedio < 10.5 && promedio > 5) {
    letra = "E";
  } else if (promedio <= 5 && promedio >= 1) {
    letra = "F";
  } else {
    letra = "ingrese notas corectas";
  }

  cout << "El promedio es: " << promedio << endl;
  cout << "La nota que le corresponde es: " << letra << endl;

  return 0;
}
