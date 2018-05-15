#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int datoInt;
    char datoChar;
}eDato;

int main()
{
   eDato miDato ={1,'C'};
    eDato miDato2 ={1,'A'};
    eDato lista[2];
    lista[0]=miDato;
    lista[1]=miDato2;
    eDato* pDato = NULL;

    pDato =lista;
    for(int i=0;i<2;i++)
    {
        printf("%d -- %c",miDato.datoInt,miDato.datoChar);
        printf("Desde el puntero: %d -- %c\n",(pDato+i)->datoInt,(pDato+i)->datoChar);
    }

}
