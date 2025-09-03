/******************************************************************************
=========================================

EXERCÍCIO 1: COMPARAÇÃO DE STRINGS

=========================================

Implemente um programa que receba duas strings como 
argumentos da linha de comando e informe se elas são iguais 
ou diferentes. O programa deve retornar 0 se forem iguais e 1 
se forem diferentes.

Exemplo de uso:
$ ./compara casa casa
Strings iguais

$ ./compara casa carro
Strings diferentes

*******************************************************************************/

#include <stdio.h>
#include <string.h>

    

int main(int argc, char *argv[]){
    if(argc!=3){
        printf("Insira apenas duas palavras como argumento \n");
        return 0;
    }
    int resp;   
    
    int cmp = strcmp(argv[1], argv[2]);
    
    if(cmp==0){
       resp = 0;
    }else{
       resp = 1;
    }

    if(resp==0){
        printf("São strings iguais \n");
    }else{
        printf("São strings diferentes \n");
    }
        
    return 0;
}
