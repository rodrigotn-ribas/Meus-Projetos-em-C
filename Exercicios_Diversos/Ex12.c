#include <stdio.h>
/*
Sistema de estoque
Crie uma struct Produto com: nome, preço e quantidade.
Use um array de até 20 produtos.
Faça um menu com opções:
1 - Cadastrar produto
2 - Listar produtos
3 - Buscar produto por nome
4 - Sair
*/

typedef struct {
	
	char nome[50];
	float preco;
	int quantidade;
	
}Produto;

int main(){
	
	int max_produtos = 20;
	int produtos_cadastrados = 0;
	int i, opcao;
	
	Produto estoque[max_produtos];

	
	do{
		printf("\n1 - Cadastrar produto\n");
		printf("2 - Listar produtos\n");
		printf("3 - Buscar produto por nome\n");
		printf("4 - Sair\n");
		printf("escolha a opcao: ");
		scanf("%d", &opcao);
		switch(opcao){
		
			case 1:
				if(produtos_cadastrados < max_produtos){
					printf("Nome: ");
					scanf(" %[^\n]",&estoque[produtos_cadastrados].nome);
					printf("Preco: ");
					scanf(" %f",&estoque[produtos_cadastrados].preco);
					printf("Quantidade: ");
					scanf(" %d",&estoque[produtos_cadastrados].quantidade);
					produtos_cadastrados++;
					break;
				}else{
					printf("\nMaximo de produtos atingido");
				}
			case 2:
				if(produtos_cadastrados == 0){
					printf("\nNenhum produto cadastrado!");
				}else{
					for(i = 0; i< produtos_cadastrados; i++){
						printf("\nNome: %s",estoque[i].nome);
						printf("\nPreco: %.2f",estoque[i].preco);
						printf("\nQuantidade: %d",estoque[i].quantidade);
					}
				}
				break;
			case 3:
					
			case 4:
			printf("\nEncerrando a agenda.");
				break;		
			default:
				printf("\nOpcao invalida");
		}
	}while(opcao != 4);
	
}

/*
Como fazer o buscar? Como ele funciona?

*/



