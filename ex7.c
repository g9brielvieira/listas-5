#include <stdio.h>

int main() {
    int matriz[3][3];
    int soma_diagonal_secundaria = 0;

    // Leitura da matriz 3x3
    printf("Digite os elementos da matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            // Soma os elementos da diagonal secundária
            if (i + j == 2) {  // condição para a diagonal secundária
                soma_diagonal_secundaria += matriz[i][j];
            }
        }
    }

    // Exibição da soma da diagonal secundária
    printf("\nSoma da diagonal secundária: %d\n", soma_diagonal_secundaria);

    return 0;
}
