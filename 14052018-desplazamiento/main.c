#include <stdio.h>
#include <stdlib.h>

int main()
{

 int  numero;
 int* punteroAEntero;
 int arrayEnteros[4]={111,222,333,444};
 punteroAEntero=arrayEnteros;
 printf("arrayEnteros[0]? %d\n",&arrayEnteros[0]);
 printf("puntero a entero? %d\n",punteroAEntero);

 for(int i=0;i<4;i++){printf("Valores del array: %d\n",*(punteroAEntero+i));}
 for(int i=0;i<4;i++){printf("VAlores del array[0] + indice: %d\n",*punteroAEntero+i);}
 for(int i=0;i<4;i++){printf("Valores del puntero: %d\n",(punteroAEntero+i));}

/*
 //punteroAEntero =&numero;
 printf("%d\n",punteroAEntero);
 printf("%d\n",&punteroAEntero);
 printf("%d\n",*punteroAEntero);

 if(punteroAEntero!=NULL){ printf("\nNO ES NULL\n");}
 */

 numero=33;
 punteroAEntero=&numero;

 printf("%d\n",punteroAEntero); // direccion donde esta guardado el valor de numero (33)
 printf("%d\n",punteroAEntero+0);
 printf("%d\n",punteroAEntero+1);
 printf("%d\n",punteroAEntero+2);
 printf("%d\n",punteroAEntero+3);

 //ARITMETICA DE PUNTEROS





}

// el tamaño del puntero siempre es 4 bytes (el valor de un entero)
