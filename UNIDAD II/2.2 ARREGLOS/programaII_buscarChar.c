/*2. PROGRAMA QUE LEA UN ARREGLO DE 14 CARACTERES Y BUSQUE UN CARACTER ESPECÍFICO, 
DEBE IMPRIMIR LA POSICIÓN DEL PRIMER COMPONENTE QUE COINCIDA Y DETENER LA BÚSQUEDA. 
EN CASO DE NO ENCONTRAR EL CARACTER BUSCADO DEBE IMPRIMIR EL MENSAJE "DATO NO LOCALIZADO".
DATO DE PRUEBA "EXTRAORDINARIO", LOCALIZAR LA LETRA O Y LOCALIZAR LA LETRA P*/
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
