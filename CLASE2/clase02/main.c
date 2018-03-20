#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero=0;
    int suma=0;
    int par=0;
    int contador=0;
    int max=0;
    int min=0;

    printf("\nIngrese numero, cero para salir: \n");
    scanf("%d", &numero);
    if (numero !=0){
    max = numero;
    min = numero;
    suma = suma+numero;
    contador=1;
    if(numero%2==0){par=1;}
    }

        while (numero!=0){

        printf("\nIngrese numero, cero para salir: \n");
        scanf("%d", &numero);
        if (numero!=0){
        if (max<numero){max=numero;}
        if (min>numero){min = numero;}
        if (numero%2==0){par++;}
        suma=suma+numero;
        (contador)++;
        }
    }

    printf("\n La cantidad de numeros pares es: %d\n",(par) );
    printf("\n El promedio de los números ingresados es: %.2f\n", (float)suma /contador);
    printf("\n La suma de todos los números es: %d", suma);
    printf("\n El maximo es: %d y el minimo es: %d", max,min);



return 0;
}
