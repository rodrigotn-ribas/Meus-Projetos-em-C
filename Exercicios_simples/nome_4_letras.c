#include <stdio.h>
/*
Receber um nome e imprimir as 4 primeiras letras do nome.
*/
int main(fdsf){
	char nome[30];
	int i;
	
	printf("Digite um nome: ");
	scanf("%s", &nome);
	
	for(i=0;i<4;i++){
		printf("%c", nome[i]);
	}
}
