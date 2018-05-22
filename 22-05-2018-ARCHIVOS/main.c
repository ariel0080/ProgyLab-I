#include <stdio.h>
#include <stdlib.h>

void funcion1();
void funcion2();
void funcion3();
void funcion4();

int main()
{


funcion4();


return 0;

}


void funcion1()

{
    FILE* miArchivo;
    int numero = 12843;


    miArchivo = fopen("prueba.txt","w"); // w solo es modo texto
    fwrite(&numero,sizeof(int),1,miArchivo); // (direccion de memoria del dato que voy a guardar, tamaño en bytes del tipo de dato q quiero guardar, cantidad de datos de ese tipo de datos, archivo donde lo voy a guardar)
    fclose(miArchivo);

    miArchivo = fopen("prueba.txt","r");
    fread(&numero,sizeof(int),1,miArchivo);
    printf("NUMERO: %d",numero);
    fclose(miArchivo);

}

void funcion2()
{
    FILE* miArchivo;
    int i;
    int numero;
    int lista[5];

    miArchivo = fopen("prueba2.txt","w");

    for (i=0;i<5;i++)
    {
        printf("\nIngrese numero: ");
        scanf("%d",&numero);

        fwrite(&numero,sizeof(int),1,miArchivo);
    }

    fclose(miArchivo);

    miArchivo =fopen("prueba2.txt","r");
    i=0;
    while(!feof(miArchivo))
    {
        fread(&lista[i],sizeof(int),1,miArchivo);
        i++;
    }

    for(i=0;i<5;i++)
    {
        printf("%d\n",lista[i]);
    }

    fclose(miArchivo);
}

void funcion3()
{
    FILE* miArchivo;
    int i;
    int numero;
    int lista[5]={1,5,9,6,4};

    miArchivo = fopen("prueba3.txt","w");

    fwrite(lista,sizeof(int),5,miArchivo);


    fclose(miArchivo);

    miArchivo =fopen("prueba3.txt","r");
    i=0;
    while(!feof(miArchivo))
    {
        fread(&lista[i],sizeof(int),1,miArchivo);
        i++;
    }

    for(i=0;i<5;i++)
    {
        printf("%d\n",lista[i]);
    }

    fclose(miArchivo);

    miArchivo =fopen("prueba3.txt","r");
    fread(lista,sizeof(int),5,miArchivo);

    for(i=0;i<5;i++)
    {
        printf("%d\n",lista[i]);
    }
}

void funcion4()
{
    typedef struct
    {
        int numero;
        char letra;
    }eDato;

    eDato d ={3,'A'};
    eDato d2[2] ={{3,'A'},{4,'B'}};
    FILE* miArchivo;
    int numero = 128;
    int otroNumero;

    miArchivo = fopen("numero.dat","wb");
    fwrite(&d,sizeof(eDato),1,miArchivo); //si no fuiera un array de edato, d va con ampersan (&d)
    fclose(miArchivo);

    miArchivo = fopen("numero.dat","rb");
    fread(&d,sizeof(eDato),1,miArchivo);
    printf("%d--%c",d.numero,d.letra);
    fclose(miArchivo);

    fwrite(d2,sizeof(eDato),2,miArchivo); //si no fuiera un array de edato, d va con ampersan (&d)
    fclose(miArchivo);

    miArchivo = fopen("numero.dat","rb");
    fread(d2,sizeof(eDato),2,miArchivo);
    printf("%d--%c",d2[1].numero,d2[1].letra);
    printf("%d--%c",d2[2].numero,d2[2].letra);
    fclose(miArchivo);
}
