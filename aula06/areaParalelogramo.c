#include <stdio.h>
#include <math.h>

typedef struct{
		float ladoA;
		float ladoB;
		float angulo;
	} Paralelogramo;


int main(){

    Paralelogramo paralelogramo;


    printf("Entre com os lados: ");
    scanf("%f %f", &paralelogramo.ladoA, &paralelogramo.ladoB);

    printf("Entre com o angulo (graus): ");
    scanf("%f", &paralelogramo.angulo);

    float perimetro = 2*(paralelogramo.ladoA + paralelogramo.ladoB);

    printf("Perimetro: %2.f \n", perimetro);

    float area = paralelogramo.ladoA * (sin(paralelogramo.angulo * 3.14159265359 / 180.0) * paralelogramo.ladoB);

    printf("Area: %.2f \n", area);

    return 0;


}
