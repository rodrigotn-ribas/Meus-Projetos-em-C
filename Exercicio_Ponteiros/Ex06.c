#include <stdio.h>
/*
Maior valor (com ponteiro)
Escreva uma função que receba um array de inteiros e retorne, usando ponteiros, o maior valor do array.
*/

int maior_valor(int ar[5]){
	int i, maior=0; //Declaro o maior com o valor 0 para nao ter lixo de memoria
	int *ptr = ar; 
	for(i=0;i<5;i++){
		if(maior < *(ptr + i)){ //Falo que se o maior for menor que o ponteiro + i, ele recebe o valor desse ponteiro + i
			maior = *(ptr + i);
		}
	}	
	return maior;
}

int main(){
	int i, maior;
	int ar[5];
	
	printf("digite os valores do array\n");
	for(i=0;i<5;i++){
		printf("valor %02d: ", i+1);
		scanf("%d", &ar[i]);
	}
	
	maior = maior_valor(ar);
	printf("%d", maior);
	
}
