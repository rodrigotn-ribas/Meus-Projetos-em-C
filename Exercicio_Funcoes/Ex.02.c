#include <stdio.h>
/*
Dobro do número
Faça uma função que receba um inteiro e retorne o dobro dele.
*/

int dobra(int n1){
	int resultado = n1*n1;
	return(resultado);
}

int main(){
	int n1, resultado;
	
	printf("digite um numero: ");
	scanf("%d", &n1);
	
	resultado = dobra(n1);
	printf("valor do numero dobrado: %d", resultado);	
}
