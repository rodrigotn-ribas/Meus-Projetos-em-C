#include <stdio.h>
//recolha 5 notas e faca a media
int main(){
	int i, valor=0, m; 
	float notas[5], media;
	
	printf("Digite 5 notas: \n");
	for(i=0;i<5;i++){
		printf("nota %02d: ", i+1);
		scanf("%f", &notas[i]);
		valor += notas[i];
	}
	media = valor/5;
	printf("media das notas: %.2f", media);
	
	printf("\nNotas acima da media: \n");
	for(i=0;i<5;i++){
		if(notas[i] > 6){
			printf("%.2f\n", notas[i]);
			m += 1;
		}	
	}
	printf("Quantidade de notas acima da media: %d", m);
}
