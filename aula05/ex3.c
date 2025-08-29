#include <stdio.h>

int main(int argc, char *argv[])
{
//argc é o nmr de argumentos passados

  int i;

  for (i=0;i<argc;i++) {
       printf("%s\n", argv[i]);
  }
  printf("Numero de parametros passados = %d\n", argc-1); /* o primeiro é o nome do arquivo executavél" */
  return 0;
}
