#include <stdio.h>
/*
Soma dos elementos
Faça uma função que receba um array de inteiros e seu tamanho, e retorne a soma de todos os elementos.
*/
/*int soma_array(int arr[tamanho]){
	int i, valor, tamanho;
	for(i=0;i<=tamanho;i++){
		valor += arr[i];
	}
	return(valor);
}
*/
int main(){
	int tamanho;
	int arr[tamanho];
	int i, valor;
	
	printf("Digite o tamanho da lista: ");
	scanf("%d", &tamanho);
	
	for(i=0;i<=tamanho;i++){
		scanf("%d", &arr[i]);
	}
	for(i=0;i<=tamanho;i++){
		valor += arr[i];
	}
	printf("valor da soma dos elementos: %d", valor);
}
