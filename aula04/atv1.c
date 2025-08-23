//Faça um código para copiar o conteúdo de x para y, sem que estas variáveis apareçam no lado esquerdo de um sinal de atribuição. 

#include <stdio.h>
int main()
{
  int x=10;
  int y, *p, *w;
  
  //p aponta para o X
  p = &x;
  
  //w aponta para o y
  w = &y;
  
  // W (que aponta para Y) recebe P (que aponta para X)
  //Y recebe X
  *w = *p;
  
  printf("resultado: %d \n", y);
}








