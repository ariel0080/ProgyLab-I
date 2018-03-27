#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "funciones.h"


int main()
{
    int edad,legajo,nota,fact;
    edad = pedirEntero("Ingrese Edad: ",18,60);
    legajo = pedirEntero("Ingrese Legajo: ", 1,1500);
    nota = pedirEntero("Ingrese Nota: ",1,10);
    fact =factorial(5);
    printf("El factorial es: %d",fact);
    return 0;
}

