#include <stdio.h>
/*
1- Fazer um programa em C que pergunta um valor em metros e imprime o
correspondente em decímetros, centímetros e milímetros.
*/
int main(){
	float valor_M, valor_dm, valor_cm, valor_mm;
	int opcao;
	do{
		printf("---Bem vindo ao convertor--\n");
		printf("--- 1- De metros para decimetros---\n");
		printf("--- 2- De metros para centimetros---\n");
		printf("--- 3- De metros para milimetros---\n");
		printf("--- 4- Para sair do sistema ---\n");
		printf("Selecione uma forma de conversao:\n");
		scanf("%d", &opcao);
		
		switch(opcao){// O switch funciona apartir de uma variavel opcao que seleciona qual case selecionar.
		printf("Digite um valor em metros: ");
		scanf("%f", &valor_M);
			case 1:
				valor_dm = valor_M * 10;
				printf("valor em decimentros: %.2f\n", valor_dm);
				break;
			case 2:
				valor_cm = valor_M * 100;	
				printf("valor em centimetros: %.2f\n", valor_cm);
				break;
			case 3:
				valor_mm = valor_M * 1000;	
				printf("valor em milimetros: %.2f\n", valor_mm);
				break;
			default:
				printf("opcao invalida\n");	
		}
	}while(opcao != 4);
	printf("Desligando...");
}
