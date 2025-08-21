#include <stdio.h>
#include "ex1.h"

//funcao (em ex1.c) que faz media de um vetor de inteiros com 2 parametros, o vetor e seu tamanho.

//vetor é passado por referencia (passa o endereco dele)

//string null terminate -> final 0 (nul) -> adicionado ao final (alfa[]="IFSC-SJ" possui 8 caracteres)


int main(){

	int x[5]={4, 2, 6, 9, 3};

	char alfa[]="IFSC-SJ";

	printf("media: %.2f e o elemento na pos0 é %d \n", mediaVetor(5, x), x[0]);
	
	alfa[4] = 0; // print -> IFSC -- se colocar '0' adiciona o caracter 0 -- a forma mais correta é alfa[0]='\0'; 
	
	printf("a string é %s \n", alfa);
	
	
	
}


