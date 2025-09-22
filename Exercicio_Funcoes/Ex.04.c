#include <stdio.h>
/*
Maior de dois números.
Escreva uma função que receba dois números inteiros e retorne o maior deles.
*/
int maior_numero(int n1, int n2){
	if(n1 > n2){
		printf("%d e maior que %d", n1, n2);
	}else if(n1 == n2){
		printf("%d e %d sao iguais");
	}else{
		printf("%d e maior que %d", n2, n1);
	}
}

int main(){
	int n1, n2;
	
	printf("digite dois valores: ");
	scanf("%d\n", &n1);
	scanf("%d", &n2);
	
	maior_numero(n1,n2);
}
