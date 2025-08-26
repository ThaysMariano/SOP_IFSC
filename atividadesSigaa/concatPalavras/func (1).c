#include "header.h"
#include <string.h>

void concatenar(char palavra1[], char palavra2[], char resultado[]){
    strcpy(resultado, palavra1);
    
    int len = strlen(resultado);
    
    strcpy(resultado+len, palavra2);
}