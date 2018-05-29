#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* vector;
    int* aux;
    int i;
    //vector = malloc(sizeof(int)*10);
    vector = calloc(10,sizeof(int));
    for(i=0; i<10;i++)
    {
        *(vector+i) = i+1;
    }

    for(i=0;i<10;i++)
    {
        printf("%d\n",*(vector+i));
    }

    aux = realloc(vector,sizeof(int)*15); // no me da 15 lugares sino 5 mas ademas de los 10 anteriores, se hace con aux por si no ecuentra un espacio contiguo al ultimo maloc y se reasigna un nuevo bloque

    if(aux!=NULL)
    {
        vector =aux;
        for(int i=10;i<15;i++)
        {
            *(vector+i) = i+1;
        }
    printf("\nREALLOC\n");

    for(int i=0;i<15;i++)
    {
        printf("%d\n",*(vector+i));
    }
    }

    aux = realloc(vector,sizeof(int)*7);

    if(aux!=NULL)
    {
        vector =aux;
        for(int i=10;i<15;i++)
        {
            *(vector+i) = i+1;
        }
    printf("\nREALLOCx7\n");
    for(int i=0;i<17;i++)
    {
        printf("%d\n",*(vector+i));
    }
    }



}

