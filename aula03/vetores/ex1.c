float mediaVetor(int num, int vetor[]){
	float soma = 0;
	for(int i=0; i<num; i++){
		soma = soma + vetor[i];
	}
	return soma/num;
}
