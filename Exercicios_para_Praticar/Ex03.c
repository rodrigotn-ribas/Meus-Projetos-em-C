#include <stdio.h>
/*
Peça ao usuário uma nota de 0 a 10 e mostre o conceito:
0–4: Reprovado
5–6: Recuperação
7–10: Aprovado
*/
int main(){
	int n1;
	
	printf("digite uma nota: ");
	scanf("%d", &n1);
	
	if(n1 >= 0 && n1 <= 4){
		printf("voce tirou %d, e foi reprovado", n1);
	}else if(n1 >= 5 && n1 <=6){
		printf("voce tirou %d, e esta de recuperacao", n1);
	}else{
		printf("voce tirou %d, e foi aprovado", n1);
	}
	
}
