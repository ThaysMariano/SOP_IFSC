// Thays Mariano 26 de Agosto de 2025

//Dois vetores tridimensionais partem da origem (0,0,0) e terminam, 
//respectivamente, nos pontos A e B, definidos por suas coordenadas no espaço 3D.

//Escreva uma função  em linguagem C que recebe os vetores correspondentes 
//aos pontos A e B e retorne o produto escalar entre os vetores A e B

// u(x1, y1, z1) v(x2, y2, z2)
// u*v = (x1*x2)+(y1*y2)+(z1*z2)

#include <stdio.h>
#include "header.h"

//coordenadas dos pontos A e B 
int a[DIMENSOES] = {4, 6, 7};
int b[DIMENSOES] = {7, 9, 10};

int main (){

    int resposta = produtoEscalar(a, b);
    printf("O produto escalar entre U e V é: %d", resposta);
    return 0;
}