#include <stdio.h>
/*
1. Menu de operações matemáticas. Faça um programa que mostre um menu:
1 - Somar dois números
2 - Subtrair dois números
3 - Multiplicar dois números
4 - Dividir dois números
Use switch para escolher a operação.
*/
int main(){
	int opcao;
	float x, y, soma, subtracao, multiplicacao, divisao;
	
	do{
		printf("----------Calculadora----------");
		printf("\n1- Somar dois numeros");
		printf("\n2- Subtrair dois numeros");
		printf("\n3- Multiplicar dois numeros");
		printf("\n4- Dividir dois numeros");
		printf("\n5- Sair");
		printf("\nDigite sua opcao: ");
		scanf("%d", &opcao);
		switch(opcao){
			case 1:
				printf("Digite um numero: ");
				scanf("%f", &x);
				printf("Digite um numero: ");
				scanf("%f", &y);
				soma = x + y;
				printf("\nResultado da soma: %.2f\n", soma);
				break;
			case 2:
				printf("Digite um numero: ");
				scanf("%f", &x);
				printf("Digite um numero: ");
				scanf("%f", &y);
				subtracao = x - y;
				printf("\nResultado da subtracao: %.2f\n", subtracao);
				break;
			case 3:
				printf("Digite um numero: ");
				scanf("%f", &x);
				printf("Digite um numero: ");
				scanf("%f", &y);
				multiplicacao = x * y;
				printf("\nResultado da Multiplicacao: %.2f\n", multiplicacao);
				break;
			case 4:
				printf("Digite um numero: ");
				scanf("%f", &x);
				printf("Digite um numero: ");
				scanf("%f", &y);
				divisao = x / y;
				printf("\nResultado da Divisao: %.2f\n", divisao);
				break;
			case 5:
				break;
			default:
				printf("Opcao invalida\n");
				break;
		}
	}while(opcao != 5);
		printf("\nSaindo do programa...");
}
