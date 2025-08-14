
#include <stdio.h>

int main()
{
  int vel;
  int multa=0;
  
  printf("Digite a velocidade: ");
  scanf("%d", &vel);
  
  if(vel>80){
  	multa=360;
  }else if(vel>60 && vel<=80){
  	multa=180;
  }
  
  if(multa!=0){
  	printf("Multa de: %d,00 reais\n", multa);
  }else{
  	printf("Não há multa\n");
  }
  
 
  return 0;
}

