#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

float sumar(float numero1, float numero2); // prototipo de funcion [retorno(tipo), nombre(verbo), parametros de entrada(tipo + nombre]

float PediryLeerNumero(int max, int min);
char PedirOperador(void);


int main()
{
    // CALCULADORA - SE INGRESA NUMERO OPERACION NUMERO
    float numero1,numero2,resultado;
    char operacion,condicion;


    printf("\tCALCULADORA\n");
    printf("\n Ingrese S para salir cualquier letra para continuar\n");
    condicion=getche();

    while (condicion!='S'){

        numero1 = PediryLeerNumero(32000,-32000);
        operacion = PedirOperador();
        numero2 = PediryLeerNumero(32000,-32000);

        switch(operacion)

        {
        case '+':
            resultado =sumar(numero1,numero2); // invocacion de funcion sumar
            break;
        case '-':
            resultado=numero1-numero2;
            break;
        case '*':
            resultado=numero1*numero2;
            break;
        case '/':
            resultado=numero1/numero2;
            break;
        }

        printf("\n \t El resultado de la operacion es: %.2f",resultado);
        printf("\n");

        printf("\n Ingrese S para salir cualquier letra para continuar\n");
        condicion=getche();
        system("cls");

    }

    return 0;
}

float sumar(float numero1, float numero2) // implementacion  de la funcion
{
    float resultado;

    resultado = numero1+numero2;

    return resultado;
}

float PediryLeerNumero(int max, int min)
{
    printf("\n Ingresar numero\n");
    float numero;
    fflush(stdin);
    scanf("%f", &numero);

    while (numero > max || numero < min)
    {
    printf("\n La cantidad supera el rango admitido (-32000, 32000)\n");
    printf("\n Ingresar numero\n");
    float numero;
    fflush(stdin);
    scanf("%f", &numero);
    }

    return numero;
}

char PedirOperador(void)
{
    char operador;
    char mas = '+';
    printf("Ingrese la operacion matematica + - * /\n");
    operador=getche();
    while(operador != '+' && operador != '-' && operador != '*' && operador != '/')
    {
        printf("\nOperador no valido, Ingrese nuevamente el operador\n");
        operador=getche();
    }
    return operador;
}




