#include <stdio.h>
#include <math.h>
/*
Fazer um programa em "C" que solicite 2 n�meros e informe:
a) A soma dos n�meros;
b) O produto do primeiro n�mero pelo quadrado do segundo;
c) O quadrado do primeiro n�mero;
d) A raiz quadrada da soma dos quadrados;
e) O seno da diferen�a do primeiro n�mero pelo segundo;
f) O m�dulo do primeiro n�mero
*/
int main(){
	float x, y;
	
	printf("Digite dois valores: \n");
	scanf("%f", &x);
	scanf("%f", &y);
	
	float soma = x+y;
	float soma_dos_quadrados = pow(x,2) + pow(y,2);
	
	printf("Resultado da soma: %.2f \n", soma);
	printf("O produto do primeiro pelo quadrado do segundo %.2f\n", pow(soma,2));
	printf("O quadrado do primeiro numero %.2f\n", pow(x, 2));
	printf("A raiz quadrada da soma dos quadrados %.2f\n", sqrt(soma_dos_quadrados));
	printf("O seno da diferen�a do primeiro numero pelo segundo: %.2f\n", sin(x-y));
}
