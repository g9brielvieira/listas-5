#include <stdio.h>

#define TAM 6

// Função que calcula a soma das diagonais principal e secundária
void soma_diagonais(int A[TAM][TAM], int *resultado) {
    int soma = 0;

    for (int i = 0; i < TAM; i++) {
        soma += A[i][i];           // diagonal principal
        soma += A[i][TAM - 1 - i]; // diagonal secundária
    }

    *resultado = soma;
}

int main() {
    int matriz[TAM][TAM];
    int soma;

    printf("Digite os elementos da matriz 6x6:\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    soma_diagonais(matriz, &soma);

    printf("Soma das diagonais principal e secundária: %d\n", soma);

    return 0;
}
