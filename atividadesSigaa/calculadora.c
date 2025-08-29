/******************************************************************************
=========================================

EXERCÍCIO 2: CALCULADORA SIMPLES

=========================================

Implemente um programa que receba três argumentos na linha de comando:
dois números inteiros e um operador (+ ou -). O programa deve realizar 
a operação indicada e imprimir o resultado.

Exemplo de uso:
$ ./calc 10 + 5

Resultado: 15
$ ./calc 20 - 7
Resultado: 13

Regras:

- Verificar se a quantidade de argumentos é adequada.
- Validar o operador.
- Utilizar atoi() para converter strings em inteiros.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

    float calcular(char num1[], char *op, char num2[]){
        float num10 = atoi(num1);
        float num20 = atoi(num2);
        float conta;
        switch(*op){
            case '+': 
                conta = num10+num20;
                break;
            case '-':
                conta = num10-num20;
                break;
            case '*':
                conta = num10*num20;
                break;
            case '/':
                conta=num10/num20;
                break;
            default:
                printf("Insira um operador válido");
                break;
        }
        
        return conta;
    }
    

int main(int argc, char *argv[])
{
    if(argc!=4){
        printf("Insira a quantidade de argumentos correta!");
        return 0;
    }
    
    if(atoi(argv[3])==0){
        printf("Divisao por 0!");
        return 0;
    }
    
    
   float resposta = calcular(argv[1], argv[2], argv[3]);
   printf(" Resultado: %.2f \n", resposta);
   return 0;
}