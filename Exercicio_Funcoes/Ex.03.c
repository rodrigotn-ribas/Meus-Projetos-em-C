#include <stdio.h>
/*
N�mero par ou �mpar
Crie uma fun��o que receba um inteiro e retorne 1 se for par e 0 se for �mpar.
*/
int par_impar(int n1){
	if(n1 % 2 == 0){
		printf("numero e par");
	}else{
		printf("numero e impar");
	}
}

int main(){
	int n1;
	
	printf("digite um valor: ");
	scanf("%d", &n1);
	par_impar(n1);
}
