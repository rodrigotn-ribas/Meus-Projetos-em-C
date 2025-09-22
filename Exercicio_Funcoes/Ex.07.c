#include <stdio.h>

/*Média aritmética
Faça uma função que receba três notas (float) e retorne a média.
*/
int media(float n1, float n2, float n3){
	
	float resultado = (n1+n2+n3)/3;
	
	printf("Sua media ficou: %f\n", resultado);
	
	if(resultado < 7){
		printf("Voce esta reprovado");
	}else{
		printf("Voce esta aprovado");
	}
	return(resultado);
}

int main(){
	float n1, n2, n3, resultado;
	
	printf("digite suas tres notas: \n");
	scanf("%f\n", &n1);
	scanf("%f\n", &n2);
	scanf("%f", &n3);
	
	resultado = media(n1,n2,n3);
	
}
