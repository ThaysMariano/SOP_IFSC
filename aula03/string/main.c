#include <stdio.h>
#include <string.h>
#include "ex1.h"


//string null terminate -> final 0 (nul) -> adicionado ao final (alfa[]="IFSC-SJ" possui 8 caracteres)

#define TAM 10 // TAM é apelido para 10 (nao e uma variavel)

int main(){

	int x[5]={4, 2, 6, 9, 3};

	char alfa[]="IFSC-SJ";
	char beta[TAM];

	printf("O tamanho da string é %d \n", strlen(alfa)); //diz 7 pois é o len da string
		printf("O tamanho da string é %s \n", alfa); // IFSC-SJ
	
//	alfa[4]=0;	
//	printf("O tamanho da string é %d \n", strlen(alfa)); //diz 4 pois inseri o 0 

	printf("O tamanho da string é %d \n", strlen(&alfa[5]));  //diz 2 pois eu disse para comecar a partir do endereço 5
	printf("O tamanho da string é %s \n", &alfa[5]); // SJ
	
	strcpy(beta, alfa); //endereço destino, endereço origem 
	printf("Strcpy: %s \n", beta); //coloquei alfa em beta
	
	
	//concatenar strings
	char a[20]="IFSC"; //forçou a dimenção pois a string concatenada vem para a primeira passada, a qual deve ter espaço para caber a palavra
	char b[]= "-SJ";
	
	strcat(a, b);
	printf("a string agora é %s \n", alfa);
	
	
	
}


