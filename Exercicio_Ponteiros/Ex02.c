#include <stdio.h>
/*
Troca de valores
Faça uma função que troque os valores de duas variáveis inteiras usando ponteiros.
CODIGO NAO LIMPO*/
void troca_valores(int *ptr1, int *ptr2){
	int a, b;
	printf("digite um valor: ");
	scanf("%d", &a);
	printf("digite outro valor: ");
	scanf("%d", &b);
	*ptr1 = a;
	*ptr2 = b;
}
int main(){
	int n1=0, n2=0;
	int *ptr1=&n1;
	int *ptr2=&n2;
	
	printf("digite um valor: ");
	scanf("%d", &n1);
	printf("digite outro valor: ");
	scanf("%d", &n2);
	
	printf("(Antes) valor de n1 = %d\n", n1);
	printf("(Antes) valor de n2 = %d\n\n", n2);
	troca_valores(ptr1, ptr2);
	printf("(Depois) valor de n1 = %d\n", n1);
	printf("(Depois) valor de n2 = %d\n\n", n2);
}
