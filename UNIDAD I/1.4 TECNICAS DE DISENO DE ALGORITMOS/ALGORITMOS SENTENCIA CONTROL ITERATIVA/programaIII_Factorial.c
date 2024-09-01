// 3. PROGRAMA QUE LEA UN ENTERO Y CALCULE EL FACTORIAL DEL MISMO (DATOS DE PRUEBA 12 Y 6)
#include <stdio.h>

int factorial(int numero);

int main(){
   int n;

   printf("Ingrese el numero a obtener su factorial: ");
   scanf("%d", &n);

   factorial(n);

   printf("\nEl factorial del numero %d es: %d\n", n, factorial(n));

  return 0;
}

int factorial(int numero){

 if(numero == 0){
    return 1;
 } else {
    return numero * factorial(numero - 1);
 }
}
