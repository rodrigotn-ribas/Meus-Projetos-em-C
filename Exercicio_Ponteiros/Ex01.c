#include <stdio.h>
/*
Endereço e valor
Declare uma variável inteira, um ponteiro para inteiro, aponte para essa variável e mostre:
O valor da variável
O endereço dela
O valor acessado pelo ponteiro
*/
int main(){
	int n1 = 10;
	int *p = &n1;
	
	printf("Valor da variavel: %d\n", n1);
	printf("Endereco da variavel: %p\n", &n1);
	printf("Valor acessado pelo ponteiro: %d\n", *p);
	printf("Endereco da memoria recebida pelo ponteiro: %p", p);
}
