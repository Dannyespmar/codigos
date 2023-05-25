//PAR<<IMPAR

#include <stdio.h>

int main() {
   int num = 7;
   
   // Verificar si el número es par o impar
   if (num % 2 == 0) {
      printf("%d es un número par.\n", num);
   } else {
      printf("%d es un número impar.\n", num);
   }
   
   // Imprimir la dirección de memoria de la variable "num"
   printf("La dirección de memoria de la variable num es: %p", &num);
   
   return 0;
}