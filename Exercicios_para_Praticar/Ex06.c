#include <stdio.h>

int main(){
	
	int opcao;
	float real, dolar, euro, iene;
	
	do{
		printf("---Conversor de Dinheiro---");
		printf("\n1- Real - Dolar");
		printf("\n2- Real - Euro");
		printf("\n3- Real - Iene");
		printf("\n4- Sair");
		printf("\nDigite sua opcao: ");
		scanf("\n%d",&opcao);
		switch(opcao){
			case 1:
				printf("\nValor em Real: ");
				scanf("%f", &real);
				dolar = real * 5.45;
				printf("Valor em dolar: %.2f\n", dolar);
				break;
			case 2:
				printf("\nValor em Real: ");
				scanf("%f", &real);
				euro = real * 6.37;
				printf("Valor em euro: %.2f\n", euro);
				break;
			case 3:
				printf("\nValor em Real: ");
				scanf("%f", &real);
				iene = real * 27.04;
				printf("Valor em iene: %.2f\n", iene);
				break;
			default:
				printf("\nOpcao invalida\n");
				break;
		}
	}while(opcao != 4);	
}
