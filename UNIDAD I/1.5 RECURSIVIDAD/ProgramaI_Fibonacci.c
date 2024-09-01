// 1. FUNCIÓN QUE CALCULE LA SERIE DE FIBONACCI: 0,1,1,2,3,5,8,13,21,...

#include <stdio.h>

int fibonacci (int num);

int main()
{
    int n;

    printf("Ingrese el termino de la sucesion de Fibonacci que desea obtener: ");
    scanf("%d", &n);

    fibonacci(n);

    printf("\nEl termino %d de la sucesion de Fibonacci es: %d\n", n, fibonacci(n));

    return 0;
}

int fibonacci(int num)
{
    if(num <= 0){
        return 0;
    } else if(num == 1){
        return 1;
    } else {
        return fibonacci(num - 1) + fibonacci(num - 2);
    }
}
