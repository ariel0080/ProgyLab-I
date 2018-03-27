#include "funciones.h"

int pedirEntero (char texto[], int min, int max) // aca si necesito poner el nombre de la variable

{
int retorno;
printf("%s", texto);
scanf("%d", &retorno);
retorno = validarEntero(retorno, min, max);
return retorno;
}

int validarEntero(int dato, int min, int max)

{
    while(dato < min || dato > max)
    {
    printf("Error! Reingrese\n");
    scanf("%d", &dato);
    }
return dato;
}

int factorial (int numero)
{
    int fact=1;
    numero = pedirEntero("\n\tIngrese numero a factorizar: ",1,100);
    for(int x=numero;x>=1;x--)
    {
        fact=fact*x;
    }
return fact;

}

