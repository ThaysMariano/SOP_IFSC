#include <stdio.h>
#include <math.h>

//qual tem area maior

typedef struct{
		float ladoA;
		float ladoB;
		float angulo;
        float area;
        float perimetro;
	} Paralelogramo;


void ParalelogramoInit(Paralelogramo * para){

    printf("Entre com os lados: ");
    scanf("%f %f", &para->ladoA, &para->ladoB);

    printf("Entre com o angulo (graus): ");
    scanf("%f", &para->angulo);

}


void ParalelogramoArea(Paralelogramo * para){

    para->area = para->ladoA * (sin(para->angulo * 3.14159265359 / 180.0) * para->ladoB);

    printf("    Area: %.2f \n", para->area);

}

void ParalelogramoPerimetro(Paralelogramo * para){

    para->perimetro=  2*(para->ladoA + para->ladoB);

    printf("    Perimetro: %2.f \n", para->perimetro);

}



int main(){

    Paralelogramo para1, para2;

    ParalelogramoInit(&para1);
    ParalelogramoInit(&para2);

    ParalelogramoArea(&para1);
    ParalelogramoPerimetro(&para1);

    printf("\n");

    ParalelogramoArea(&para2);
    ParalelogramoPerimetro(&para2);


    int resposta=0;

    if(para1.area>para2.area){
        resposta = 1;
    }else{
        resposta=2;
    }

    printf("O Paralelogramo com maior área é o %d°", resposta);



   
    return 0;


}
