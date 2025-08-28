/************
Exercício 1 - Troca de valores com ponteiros (swap)


Implemente um programa em C que contenha uma função chamada swap() responsável por trocar os valores de duas variáveis inteiras.

A função deve receber os endereços das variáveis como parâmetros (ou seja, usar ponteiros).

Protótipo da função:

void swap(int *a, int *b);

Exemplo de uso no main():

int x = 10, y = 20;

swap(&x, &y); 

Resultado esperado:

Antes: x = 10, y = 20

Depois: x = 20, y = 10

*******/









#include <stdio.h>

void swap(int *a, int *b){
	
	int aux;
	
	aux = *a;
	*a = *b;
	*b = aux; 
	
}


int main(){

	int x = 10;
	int y = 20;

	printf("%d, %d \n", x, y);
	
	swap(&x, &y);
	
	printf("%d, %d \n", x, y);
	


}
