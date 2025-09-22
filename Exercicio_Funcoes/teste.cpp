#include <stdio.h>

int main(){
	int i, n1, soma;
	
	scanf("%d", &n1);
	for(i=1;i<=n1;i++){
		soma *= i;
		printf("%d\n", soma);
	}
}
