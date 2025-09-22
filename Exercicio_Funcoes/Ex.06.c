#include <stdio.h>
/*
Potência
Crie uma função que calcule base^expoente (sem usar pow).
*/
int potencia(int b, int e){
	int i, resultado;
	for(i=1;i<=e;i++){
		resultado = b*i;
	}
	return(resultado);
}
int main(){
	int b, e, resultado;
	
	printf("digite um numero para a base e outro para o exponente: ");
	scanf("%d\n", &b);
	scanf("%d\n", &e);
	
	resultado = potencia(b,e);
}
