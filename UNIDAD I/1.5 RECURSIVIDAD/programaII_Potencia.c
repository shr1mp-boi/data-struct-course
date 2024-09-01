// 2. FUNCIÓN QUE CALCULE LA POTENCIA DE UN NÚMERO
#include <stdio.h>

int potencia(int numero, int expo);

int main(){
   int n, p;

   printf("Ingrese el numero que desea obtener su potencia: ");
   scanf("%d", &n);

   printf("Ingrese su exponente: ");
   scanf("%d", &p);


   potencia(n, p);

   printf("\nLa potencia del numero %d es: %d\n", n, potencia(n, p));

  return 0;
}

int potencia(int numero, int expo){

 if(expo <= 0){
    return 1;
 } else {
    return numero * potencia(numero, expo - 1);
 }
}
