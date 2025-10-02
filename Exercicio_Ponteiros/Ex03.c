#include <stdio.h>
/*
Dobrar valor
Escreva uma função que receba um ponteiro para inteiro e dobre o valor que ele aponta.
*/
void dobra_valor(int *ptr){
	*ptr *= 2;
}
int main(){
	int n1 = 0;
	int *ptr = &n1;
	
	printf("digite um valor para n1: ");
	scanf("%d", &n1);
	
	dobra_valor(ptr);
	printf("valor de n1 dobrado: %d", *ptr);
}
