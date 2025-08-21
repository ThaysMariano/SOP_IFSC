#include <stdio.h>
#include "ex1.h"

void alo_mundo(){printf("alo mundo \n");}

int main(){

	 alo_mundo();
	 float aux1=1.5, aux2=8.5;
	float mediaNum = media(aux1, aux2);
	printf("A media é: %.2f \n", mediaNum);
	
}


