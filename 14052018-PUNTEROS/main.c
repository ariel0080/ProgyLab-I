#include <stdio.h>
#include <stdlib.h>

 void swap(int* a,int* b);

 swap(int* a, int* b)
    {
        int c;
        c = *a;
        *a=*b;
        *b=c;
    }

int main()
{
    // PUNTEROS

    // DECLARACION: tipo de datos* nombre del indentificador

    char* caracter; // char *caracter; daria el mismo resultado, son expresiones equivalentes
    char aux ='7';
    caracter = &aux; // si la direccion de memoria de aux = 0x30 -> caracter (que por ejemplo esta en la posicion de memmoria 0x27 tendra guardado el valor 0x30)





    printf("%c: valor que contiene aux \n",aux); // -> 7
    printf("%p: direccion de memoria de \n",&aux); // -> 0x30
    printf("%p: contenido de la variable caracter (direccion de memoria) \n",caracter); // ->0x30
    printf("%c: Valor al que hace referencia caracter\n",*caracter);// ->7
    printf("%p Valor de memoria de la variable caracter\n",&caracter); //0x27



    int x=9;
    int y=1;
    printf("x=%d y=%d\n",x,y);
    swap(&x,&y);
    printf("x=%d y=%d",x,y);




}
