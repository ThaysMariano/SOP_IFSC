#include <stdio.h>

int main(void)
{
   char x[10]="ifsc";
   char alfa='X', *p;

   p = &alfa;    /* p aponta para alfa */

   printf("O caracter apontado por p é %c", *p);

   p = &x[2];    /* p aponta para o caracter que está 
                     na posição 2 do vetor x */

   printf("x[2] = %c\n", *p);

   //array quando colcoa so o nome é o endereço
   p = x; //mesma coisa que p=x[0]

   printf("string %s\n", p);  //ifsc &s é string sem um for
   
	//o conteúdo de p é um endereço (para onde ele aponta)
	//*p é para onde o ponteiro aponta (o valor o propriamente)
	//(print o P e o que é apontado por ele, enquanto p!=0)
   while (*p!=0) {
       printf("Endereco %p conteúdo %c\n", p,*p); //%c char
       //incrementando o endereço incrementa o valor tbm pois estao em sequencia
       p++; 
   }
    
   return 0;	
}
