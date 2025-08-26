#include "header.h"

int produtoEscalar(int x[], int y[]){
    int resultado=0;
    
    for (int i = 0; i < DIMENSOES; i++) {
        resultado += x[i]*y[i];
    }
    return resultado;
}