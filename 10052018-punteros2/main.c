#include <stdio.h>
#include <stdlib.h>

int main()
{
  int miPunteroAEntero;
  char* punteroAChar;
  char* otroPunteroaChar;
  char letra;

  punteroAChar=&letra;
  otroPunteroaChar;
  printf("\nvalor otroPunteroaChar :%d", otroPunteroaChar);
  letra='7';
  *otroPunteroaChar='e';
  printf("\nValor de letra: %d",letra);
  printf("\nValor de letra: %d",&letra);
  printf("\nValor de letra: %c",letra);

  printf("\n valor de puntero: %d en hex: %p", &letra, &letra);
  printf("\n valor de puntero: %d en hex: %p", punteroAChar,punteroAChar);
  printf("\n contenido de puntero: %c: ",*punteroAChar);
  printf("\n contenido de puntero: %d: en hex %p",&punteroAChar,&punteroAChar);

  int uno;
  int dos;
  uno=666;
  dos =110;
  swap(&uno, &dos);

  printf("El valor de uno es %d\n",x);
  printf("El valor de uno es %d\n",y);

}
