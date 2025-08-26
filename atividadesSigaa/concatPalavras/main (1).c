// Thays Mariano 26 de Agosto de 2025

/**
Escrever uma função que recebe duas palavras (sem espaços) e concatena a segunda ao final da primeira,
usando as funções strlen() e strcpy() da biblioteca <string.h>. Não utilize strcat().
 
Regras:
- considere palavras  sem espaços.
- O resultado da concatenação deve ser armazenado em um terceiro vetor que também é um parâmetro.
- Utilize strlen() para calcular o ponto de inserção da segunda palavra.
- Utilize strcpy() para fazer as cópias de conteúdo entre vetores.
 -Não use ponteiros.

Protótipo sugerido:
void concatenar(char palavra1[], char palavra2[], char resultado[]);
 
Exemplo:

Entrada:
  palavra1: casa
  palavra2: nova
Saída:
  resultado: casanova
**/

#include <stdio.h>
#include "header.h"

int main (){
    
    char palavra1[10];
    char palavra2[10];
    char resultado[20];

    printf("Digite uma palavra ");
    scanf("%s", palavra1);
    
    printf("Digite outra palavra ");
    scanf("%s", palavra2);
    
    concatenar(palavra1, palavra2, resultado);
    
    printf("O resultado é %s", resultado);

    return 0;
}