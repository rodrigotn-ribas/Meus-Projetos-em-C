#include <stdio.h>
/*
Fatorial
Fa�a uma fun��o que calcule o fatorial de um n�mero inteiro.
*/
int fatorial(int n1){
	int i, soma=1;
	for(i=1;i<=n1;i++){
		soma *= i;
	}
	return(soma);
}

int main(){
	int n1, soma;
	
	printf("digite um numero: ");
	scanf("%d", &n1);
	
	soma = fatorial(n1);
	printf("valor fatorail = %d", soma);
}

