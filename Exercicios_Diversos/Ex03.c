#include <stdio.h>
/*
Contagem de pares e ímpares
Preencha um array de 15 inteiros e mostre quantos são pares e quantos são ímpares.
*/
int main(){
	
	int i, par, impar;
	int notas[15];
	
	printf("Digite 15 valores\n");

	for(i=0;i<15;i++){
		printf("Numero %d: ", i+1);
		scanf("%d", &notas[i]);
	}
	for(i=0;i<15;i++){
		if(notas[i] % 2 == 0){
			printf("%d e par\n", notas[i]);	
		}else {
			printf("%d e impar\n", notas[i]);
		}
	}
	
}
