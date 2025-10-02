#include <stdio.h>

int maior_elemento(int vetor[5]){
	int i, maior=0;//MUITO IMPORTANTE. INICIALIZAR MAIOR = 0
	for(i=0;i<5;i++){
		if(maior < vetor[i]){
			maior = vetor[i];
		}
	}
	return(maior);
}

int main(){
	int i, vetor[5], maior;
	
	printf("Digite 5 valores para uma lista: \n");
	for(i=0;i<5;i++){
		scanf("%d", &vetor[i]);
	}
	
	maior = maior_elemento(vetor);//O vetor e enviado sem o formato de vetor
	
	printf("Maior elemento dessa lista: %d\n", maior);
	printf("Elementos da lista: ");
	
	for(i=0;i<5;i++){
		printf("%d,", vetor[i]);
	}
}
