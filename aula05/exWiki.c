#include <stdio.h>

int main(void)
{
   char x[10]="ifsc";
   char alfa='X', *p;




   p = x;

   printf("string %s\n", p); //ifsc - conteudo de p

   while (*p!=0) { //enq oq é apontado por p é dif de 0
       printf("Endereco %p conteúdo %c\n", p,*p); //endereco e o que é apotado pelo p
       p++;
   }
    
   return 0;	
}
