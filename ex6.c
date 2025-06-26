#include <stdio.h>

int main() {
    int matriz[3][3];
    int soma_diagonal = 0;

    // Leitura da matriz 3x3
    printf("Digite os elementos da matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            // Soma os elementos da diagonal principal
            if (i == j) {
                soma_diagonal += matriz[i][j];
            }
        }
    }

    // Exibição da soma da diagonal principal
    printf("\nSoma da diagonal principal: %d\n", soma_diagonal);

    return 0;
}
