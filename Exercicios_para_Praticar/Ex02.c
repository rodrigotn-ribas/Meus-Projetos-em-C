#include <stdio.h>
/*
2. Dias da semana
Peça ao usuário um número de 1 a 7 e mostre o dia da semana correspondente usando switch.
Exemplo:
Entrada: 3, Saída: Quarta-feira.
*/
int main(){
	int opcao;
	
	do{
		printf("digite um numero do dia da semana: ");
		scanf("%d", &opcao);
		switch(opcao){
			case 1:
				printf("Domingo\n");
				break;
			case 2:
				printf("Segunda-Feira\n");
				break;
			case 3:
				printf("Terca-Feira\n");
				break;
			case 4:
				printf("Quarta-Feira\n");
				break;
			case 5:
				printf("Quinta-Feira\n");
				break;
			case 6:
				printf("Sexta-Feira\n");
				break;
			case 7:
				printf("Sabado\n");
				break;
		}
	}while(opcao != 8);
	printf("\nEncerrando o programa...");
}
