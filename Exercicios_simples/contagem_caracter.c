#include <stdio.h>
#include <string.h>
/*
Atividade 1: Contagem de Caractere
Crie uma função que receba um ponteiro para char (uma string) como argumento.
A função deve percorrer a string usando aritmética de ponteiros
e retornar o número de caracteres na string (o comprimento).
Teste a função na main com uma string da sua escolha. 
*/

int main(){
	char text[100];
	
	printf("Digite uma palavra: ");
	fgets(text, sizeof(text), stdin);
		
	printf("tamanho da string: %zu", strlen(text));
}
