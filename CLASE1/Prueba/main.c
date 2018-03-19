#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    /* tipos de variables int (%d), float(%f), char(%c) */

    int numero1;
    float numero2;
    float suma;
    char letra;
    char letra2;
    char letraM;

    printf("Ingrese numero 1: ");
    scanf("%d",&numero1); // & delante de la variable hace referencia a la direccion de memeria de la variable 1

    printf("Ingrese numero 2: ");
    scanf("%f",&numero2);

    printf("Ingrese una letra: ");
    fflush(stdin); // Vacia el buffer - si no pongo esta instruccion el buffer esta lleno con el ultimo enter y como el siguiente scanf espera caracter, lo toma como valido. No pasa cuando se pide ingresar numeros porque enter no es un numero
    scanf("%c", &letra);

    printf("Ingrese una letra: ");
    letra2 = getche(); // getche muestra la letra ingresada, getch no muestra la letra ingresada en pantalla
    letraM = toupper(letra2);
    suma = numero1+numero2;


    printf("\nEl primer numero es: %d y el segundo numero es: %.2f\n", numero1, numero2);
    printf("La suma de los números es: %.2f\n",suma);
    printf("La letra ingresada es: %c\n", letra);
    printf("La letra ingresada es: %c\n", letra2);
    printf("La letra ingresada en mayusculas: %c\n", letraM);

    return 0;
}
