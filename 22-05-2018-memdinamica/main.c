#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* y;
    y = (int*)malloc(sizeof(int)); //malloc devuelve un puntero a void
    *y=9;
    printf("%d----%d", &y,y);// muestro direccion de memoria en pila y en heap / &y = direccion de memoria donde esta y, y solo muestra el valor de y que es una direccion de memoria del heap
    //*y muestra el valor al que apunta y



}
