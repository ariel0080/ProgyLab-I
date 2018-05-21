#include <stdio.h>
#include <stdlib.h>


int main()
{
    FILE* pArchivo; // se abre, se usa y se cierra
    char cadena[50];
/*
    pArchivo = fopen("C:\\TEST\\21-05-2018-FILE\\archivo.txt","w"); //si archivo existe, lo sobreescribe, si no existe lo crea [si no se puede crear devuelve NULL]

    if(pArchivo!=NULL)
    {
        // Se pudo abrir/crear el archivo

        fprintf(pArchivo, "Hola a todos");
        fclose(pArchivo);
        printf("Guardado");
    }

    else
        printf("Imposible guardar");
*/

    pArchivo = fopen("C:\\TEST\\21-05-2018-FILE\\archivo.txt","r");

    if(pArchivo!=NULL)
    {
        while(!feof(pArchivo)) // feof  indica el fin de archivo
        {
            fgets(cadena,50,pArchivo);
            puts(cadena); // fprintf("pArchivo")
        }

        fclose(pArchivo);

    }

    return 0;
}
