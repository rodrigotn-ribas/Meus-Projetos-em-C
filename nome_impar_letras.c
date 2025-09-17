#include <stdio.h>
#include <string.h>
/*
Receber um nome e imprimir as letras na posição impar 
*/
int main(){
	char nome[30];
	int i, size;
	
	printf("Digite um nome:");
	fgets(nome, sizeof(nome), stdin);
	
	size = strlen(nome);

	printf("%d\n", size);
	
	for(i=0;i<size;i++){
		printf("letrar impar do nome: %c\n", nome[i]);	
		i+=1;
	}
	
}

