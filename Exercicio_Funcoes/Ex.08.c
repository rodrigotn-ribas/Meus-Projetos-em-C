#include <stdio.h>

// Fun��o que soma os elementos de um array
int somaArray(int vetor[], int tamanho) {
    int soma = 0;
    int i;
    for (i = 0; i < tamanho; i++) {
        soma += vetor[i]; // acumula os valores
    }
    return soma; // retorna o resultado
}

int main() {
    int n, i;

    // Usu�rio escolhe o tamanho do array
    printf("Digite o tamanho do array: ");
    scanf("%d", &n);

    int numeros[n]; // array com tamanho definido pelo usu�rio

    // Lendo os elementos
    printf("Digite %d numeros inteiros:\n", n);
    for (i = 0; i < n; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Chamando a fun��o
    int resultado = somaArray(numeros, n);

    // Mostrando a soma
    printf("A soma dos elementos eh: %d\n", resultado);

    return 0;
}
