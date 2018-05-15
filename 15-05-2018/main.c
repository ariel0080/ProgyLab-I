#include <stdio.h>
#include <stdlib.h>
#define T 5

void f1(int[],int t); // notacion array
void f2(int[],int t); // notacion puntero
void f3(int*,int t); //notacion array
int  f4(int*,int t); //notacion puntero --> unica funcion recomendada para trabajar arrays!!!!!!!!!1

void f1(int a[],int t)
{
    printf("Funcion 1\n");
    for (int i=0;i<t;i++)
    {
        printf("Notacion array, elemento vector[%d]=%d\n",i,a[i]);
    }
}
void f2(int a[],int t)
{
    printf("\nFuncion 2\n");
    for (int i=0;i<t;i++)
    {
        printf("Notacion punteros, elemento vector[%d]=%d\n",i,*(a+i));
    }
}
void f3(int* a,int t)
{
    printf("\nFuncion 3\n");
    for (int i=0;i<t;i++)
    {
        printf("Notacion array, elemento vector[%d]=%d\n",i,a[i]);
    }
}

int  f4(int* a,int t)
{
    int retorno=-1;
    if(a!=NULL)
    {
        retorno=0;
        printf("\nFuncion 4\n");
        for (int i=0;i<t;i++)
        {
        printf("Notacion punteros, elemento vector[%d]=%d\n",i,*(a+i));
        }
    }
    return retorno;
}

int main()
{
    int vector[]={9,1,2,7,4};
    //f1(vector,T);
    //f2(vector,T);
    //f3(vector,T);
    if (f4(vector,T)){printf("Imposible mostrar vector");};
}
