// exemplo de geração randômica
// extracted and adapted from www.stackoverflow.com 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
      int segredo, sugestao;

      /* iniciar semente: */
      srand ( time(NULL) );

      /* gerar o número secreto: */
      segredo = rand() % 1000 + 1;

      do {
          printf ("Adivinhe um número entre (1 a 1000): ");
          scanf ("%d",&sugestao);
          if (segredo<sugestao) 
              printf ("O número secreto é menor\n");
          else {
              if (segredo>sugestao) 
                 printf ("O número secreto é maior\n");
          }
      } while (segredo!=sugestao);

      printf ("Parabéns!\n");
      return 0;
}
