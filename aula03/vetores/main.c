#include <stdio.h>
#include "ex1.h"

//funcao (em ex1.c) que faz media de um vetor de inteiros com 2 parametros, o vetor e seu tamanho.

//vetor é passado por referencia (passa o endereco dele)

int main(){

	int x[5]={4, 2, 6, 9, 3};

	printf("media: %.2f \n", mediaVetor(5, x));
	
}


