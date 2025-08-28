/***********
=========================================

EXERCÍCIO 1: COMPARAÇÃO DE STRINGS

=========================================

Implemente um programa que receba duas strings como argumentos da linha de comando e informe se elas são iguais ou diferentes. O programa deve retornar 0 se forem iguais e 1 se forem diferentes.

Exemplo de uso:

$ ./compara casa casa
Strings iguais

$ ./compara casa carro
Strings diferentes

-------------------------------------
argv[0] comando 
nmr de args !=0

strlen strcompare strncpy str--

*****/

#include <stdio.h>
#include <string.h>

int compara_string( char *v1[], char *v2[]){
	if(strlen(v1)  strlen(v2)){
		return 1;
	}
}

int main(){

	int resp = compara_string();
	
	if(resp==0){
		printf("Strings iguais!");
	}else if(resp==1){
		printf("Strings diferentes!");
	}
	


}
