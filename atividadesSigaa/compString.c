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

    

int main(int argc, char *argv[])
{
    
    if(argc!=3){
        printf("Insira duas palavras como argumento");
    }
    
    int resp;
        
        //se mudar o nmr de palavras, mas com 2 n precisaria
    for (int i = 1; i < argc-1; i++) {
        int cmp = strcmp(argv[i], argv[i+1]);
        if(cmp==0){
            resp = 0;
        }else{
            resp = 1;
        }
    }
    
    if(resp==0){
        printf("Sao strings iguais");
    }else{
        printf("Sao strings diferentes");
    }
        
    return 0;
}