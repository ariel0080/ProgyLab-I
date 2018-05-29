#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* vector;
    int indice;

    //int contraer (int* y,int);
    vector = calloc(10,sizeof(int));

    for(int i=0;i<10;i++)
    {
        *(vector+i)=i*100;
        printf("%d %d\n",*(vector+i),vector+i);
    }

    printf("\nINGRESE INDICE A BORRAR: <1-10> ");

    scanf("%d",&indice);

    for(int a=indice;a<9;a++)
    {
        *(vector+a)=*(vector+a+1);

    }

    vector = realloc(vector,sizeof(int)*9);

    for(int i=0;i<10;i++)
    {

        printf("%d %d\n",*(vector+i),vector+i);
    }


}
