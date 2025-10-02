#include <stdio.h>
/*
Percorrer array com ponteiro
Crie um array de 5 inteiros e use um ponteiro para imprimir todos os valores.
*/

int main(){
	int ar[5], i;//Declarei um array de 5 elementos
	int *ptr= ar;//Declarei um ponteiro que recebe o endereco do primeiro elemetento do array
	
	printf("digite 5 valores para uma lista: \n");
	for(i=0;i<5;i++){
		scanf("%d", &ar[i]);//Armazenei os 5 elementos no array
	}
	for(i=0;i<5;i++){
    	printf("ar[%d] = %d\r\n", i, *(ptr + i));//Printei os 5 valores usando o ponteiro
	}
}
