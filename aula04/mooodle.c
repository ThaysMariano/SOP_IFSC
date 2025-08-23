#include <stdio.h>

void main()
{
  int x;
  int *p;

  x=5;
  printf("Valor de x antes = %d\n", x);
  
  p = &x;
  *p = 10;

  printf("Valor de x depois = %d\n", x);
  printf("Endereco de x = %p\n", p);
  printf("Endereco de p = %p\n", &p);
}
