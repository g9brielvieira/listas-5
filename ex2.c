#include <stdio.h>

int main() {
    int vetor[8];
    int x, y, soma;

    // Leitura dos valores do vetor
    printf("Digite 8 valores para o vetor:\n");
    for (int i = 0; i < 8; i++) {
        printf("Posição %d: ", i);
        scanf("%d", &vetor[i]);
    }

    // Leitura dos índices X e Y
    printf("\nDigite o índice X (0 a 7): ");
    scanf("%d", &x);

    printf("Digite o índice Y (0 a 7): ");
    scanf("%d", &y);

    // Verificação se os índices são válidos
    if (x < 0 || x > 7 || y < 0 || y > 7) {
        printf("Índices inválidos. Use valores entre 0 e 7.\n");
    } else {
        soma = vetor[x] + vetor[y];
        printf("Soma dos valores nas posições %d e %d: %d\n", x, y, soma);
    }

    return 0;
}
