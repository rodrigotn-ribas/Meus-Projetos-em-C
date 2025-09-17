#include <stdio.h>
/*
Fazer um programa em C que imprime uma tabela com a tabuada de 1 a 9
*/
int main(){
	int i, j, x = 2;
	
	
	for(i=1;i<11;i++){
		printf("\ntabuada do %02d: \n", i);
		for(j=1;j<11;j++){
			printf("\'%d\'", j*i);	
		}
	}
	
}
