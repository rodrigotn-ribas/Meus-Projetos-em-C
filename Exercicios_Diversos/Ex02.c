#include <stdio.h>
/*
Maior e menor valor
Leia 10 números inteiros em um array e mostre o maior e o menor.
*/
int main(){
	int numero[10];
	int i, maior=0, menor=0;
	
	printf("Digite 10 numeros\n");
	for(i=0;i<10;i++){
		printf("Numero %d: ", i+1);
		scanf("%d", &numero[i]);
		if(maior < numero[i]){
			maior = numero[i];
		}
		if(menor > numero[i]){
			menor = numero[i];
		}
	}
	
	printf("Maior numero: %d\n", maior);
	printf("Menor numero: %d", menor);
	
}
