#include <stdio.h>
/*
4. Mini-calculadora de IMC
Peça peso e altura. Calcule o IMC. peso / altura*2
Mostre a classificação:
Menor que 18.5 - Abaixo do peso
18.5 a 24.9 - Peso normal
25 a 29.9 - Sobrepeso
30 ou mais - Obesidade
*/
int main(){
	
	float peso, altura, imc;
	
	printf("Digite sua altura em cm (ex: 1.76): ");
	scanf("%f", &altura);
	printf("Digite seu peso (ex: 65.6): ");
	scanf("%f", &peso);
	
	imc = peso/(altura*2); 
	
	if(imc < 18.5){
		printf("Voce esta abaixo do peso ideal");
	}else if(imc >= 18.5 && imc <= 24.9){
		printf("Voce esta com o peso ideal");
	}else if(imc >= 25 && imc <= 29.9){
		printf("Voce esta com sobrepeso");
	}else{
		printf("Voce esta com obesidade");
	}
	
}
