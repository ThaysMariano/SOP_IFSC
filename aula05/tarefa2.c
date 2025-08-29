/******************
Exercício 2 - Soma de elementos de um vetor

Escreva uma função que receba um vetor de inteiros e seu tamanho, e retorne a soma de seus elementos. 

A função deve utilizar ponteiros para percorrer o vetor.

Protótipo:

int soma_vetor(int *v, int n);

Exemplo de uso:

int numeros[] = {1, 2, 3, 4, 5};

int total = soma_vetor(numeros, 5);

Resultado esperado:

Soma = 15

****************/

#include <stdio.h>


int soma_vetor(int *v, int n){
	
	int soma =0;
	
	for(int i=0; i<n;i++){
		soma += *v;
		v++;
	}
	
	return soma;
}

int main(){

	int vetor[3]={8,100,3};
	
	int total = soma_vetor(vetor, 3);
	
	printf("%d\n", total);


}
