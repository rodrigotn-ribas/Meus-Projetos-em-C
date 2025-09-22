#include <stdio.h>
/*Soma simples. 
Crie uma função que receba dois números inteiros e retorne a soma.
*/

int soma(int x, int y){
	int resultado = x+y;
	return(resultado);
}
int main(){
	int x, y, resultado;
	
	printf("Digite dois valores para ver sua soma: \n");
	scanf("%d", &x);
	scanf("%d", &y);
	resultado = soma(x,y);
	printf("resultado da soma: %d", resultado);
}
