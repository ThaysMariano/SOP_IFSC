#include <stdio.h>

int main(void) {
    int vetor[5] = {10, 20, 30, 40, 50};
    int *p = vetor;   /* ponteiro aponta para o início do vetor */

    printf("vetor[2] = %d\n", vetor[2]);
    printf("*(p + 2) = %d\n", *(p + 2));
    printf("p[2] = %d\n", p[2]);

    return 0;
}
