#include <stdio.h>
/*
Média de notas
Leia 5 notas (array de float) e calcule a média.
Depois mostre as notas acima da média.
*/
int main(){
	// Sem um array
	/*
	float notas, somador, media, f;
	int i;
	
	printf("Digite 5 notas: ");
	for(i=0;i<5;i++){
		scanf("%f", &notas);
		somador += notas;
		media = somador/i;
	}
	printf("media: %.2f", media);
	*/
	
	// Com um array 
	float notas[5];
	float soma = 0, media;
	int i;
	
	printf("Digite 5 notas\n");
	for(i=0;i<5;i++){
		printf("Nota %d: ", i+1);
		scanf("%f", &notas[i]);
		soma += notas[i]; //Aqui ele soma recebe soma o valor da nota no espaco i 
	}
	
	media = soma/5;
	
	printf("Media do aluno: %.1f\n\n", media);
	printf("Notas acima da media\n");
	for(i=0;i<5;i++){
		if(notas[i] > 6){
			printf("Nota %d: %.1f\n", i+1, notas[i]);
		}
	}
}

