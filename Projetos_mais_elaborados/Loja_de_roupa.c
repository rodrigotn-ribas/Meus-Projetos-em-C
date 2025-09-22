#include <stdio.h>

//Função que faz a vista com 10% de desconto
float dez_por_cento(float total_gasto){
	//Faz a conta de 10%
	float desconto = (total_gasto * 10)/100;
	float resultado1 = total_gasto - desconto;
	return(resultado1);
}
//Função que faz em duas vezes
float duas_vezes(float total_gasto){
	//Divide em duas parcelas
	float parcela2 = total_gasto/2;
	return(parcela2);
}
//Função que apartir de 3 até 10 vezes impõe 3% de juros ao mês (somente para compras acima de R$ 100,00).
float tres_dez_vezes(float total_gasto, int vezes){
	//Calcula o juros em cima dos 3% ao mês
	float juros = ((total_gasto * 3)/100)*vezes;
	float parcela3 = total_gasto/vezes + juros;
	float valor_total = total_gasto+juros;
	return(valor_total);
}


int main(){
	int opcao;
	float total_gasto, resultado1, parcela2, valor_total, parcela3;
	int vezes;
	
	//Abre o laço do do while, e enquanto a opcao for diferente de 4, a execução não termina
	do{
		printf("--Bem vindo a Loja Y--\n");
		printf("-- 1 - A vista com 10%% de desconto--\n");
		printf("-- 2 - Parcelado ate 2 vezes--\n");
		printf("-- 3 - Parcelado de 3 a 10 vezes com 3%% de juros ao mes(acima de R$100,00)--\n");
		printf("-- 4 - Para sair do programa--\n");
		printf("-- Escolha uma forma de pagamento e informe o total gasto na loja: --\n");
		scanf("%d", &opcao);
		
		//Abre o laço do switc, contendo todas as opções 
		switch(opcao){
			case 1:
				scanf("%f", &total_gasto);
				resultado1 = dez_por_cento(total_gasto);
				printf("O valor total com o desconto ficou: R$%.2f\n", resultado1);
				break;
			case 2:
				scanf("%f", &total_gasto);
				parcela2 = duas_vezes(total_gasto);
				printf("O valor de cada parcela ficou: R$%.2f\n", parcela2);
				break;
			//No caso específicio da opção 3 o total gasto deve ser superior a 100 reais, e o mínimo de parcelas igual a 3 vezes
			case 3:
				scanf("%f", &total_gasto);
				if(total_gasto <= 100){
					printf("Somente valores acima de R$100,00\n");
					break;
				}
				printf("Digite em quantas vezes quer fazer a compra: ");
				scanf("%d", &vezes);
				if(vezes < 3){
					printf("Somente apartir de 3 vezes\n");
					break;
				}
				valor_total = tres_dez_vezes(total_gasto, vezes);
				parcela3 = valor_total/vezes;
				printf("O valor total com o os juros ficou de R$%.2f, e %d vezes de %.2f\n", valor_total, vezes, parcela3);
				break;
			//Ao digitar 4 como opção, o programa finaliza sua execução
			case 4:
				printf("Saindo do programa... ");
				break;
			default:
				printf("Digite uma opcao valida\n");
				break;
		}
	}while(opcao!=4);
}

