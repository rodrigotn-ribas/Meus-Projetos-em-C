#include <stdio.h>

int contador_par(int vetor[5]){
	int i, par=0;
	
	printf("elementos pares: ");
	
	for(i=0;i<5;i++){
		if(vetor[i] % 2 == 0){
			printf("%d, ", vetor[i]);
			par +=1;
		}
	}
	printf("\nQuantidade de valores par: %d", par);
}

int main(){
	int i, vetor[5], par, result;
	
	printf("digite 5 valores para uma lista: \n");
	for(i=0;i<5;i++){
		printf("valor %02d: ", i+1);
		scanf("%d", &vetor[i]);
	}

	result = contador_par(vetor);
		
}
