#include <stdio.h>
/*
Soma de elementos (com ponteiro)
Faça uma função que receba um array de inteiros e o tamanho, mas percorra usando ponteiros para calcular a soma.
*/
void soma_elementos(int ar[], int tamanho){
	int i, soma=0; //Declarando a soma sempre com o valor incial de 0 para nao ter lixo de memoria
	int *ptr = ar; //Declaro o ponteiro ptr com o valor da primeira posicao do array
	
	for(i=0;i<tamanho;i++){
		soma += *(ptr + i); //Digo que a soma eh mais igual ao valor de ptr + a posicao i do array
	}
	printf("%d", soma);
}

int main(){
	int n, i;
	
	printf("Digite o tamanho do array: ");
	scanf("%d", &n); //Escrevo o tamanho do array
	
	int ar[n]; //Declaro o array ja com o tamanho escrito
	
	printf("Digite os valores do array\n");
	for(i=0;i<n;i++){
		printf("Valor %02d: ", i+1);
		scanf("%d", &ar[i]);
	}
	soma_elementos(ar, n); //Chamo a funcao de soma
	
}
