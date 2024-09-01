/* 1. PROGRAMA QUE LEA UN ARREGLO DE 8 ENTEROS Y LOS ORDENE DE MENOR A MAYOR EN EL MISMO ARREGLO. 
IMPRIMIR EL ARREGLO ORDENADO DATO DE PRUEBA (5,3,8,12,6,18,33,9) */

#include <stdio.h>

int main()
{
    char arreglo[14] = "extraordinario";
    char letra;
    int tamano = sizeof(arreglo)/sizeof(arreglo[0]), pos = 1, encontrado;

    printf("Ingrese la letra a buscar dentro de la oracion: ");
    scanf("%c", &letra);

     for(int i = 0; i < tamano; i++){
         if(letra == arreglo[i]){
            encontrado = 1;
            break;
         }
         pos++;
     }

   if(encontrado){
        printf("\nPosicion del caracter %c: %d", letra, pos);
   } else{
       printf("\nDato no localizado.");
   }
    return 0;
}
