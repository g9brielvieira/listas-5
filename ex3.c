#include <stdio.h>

int main() {
    int x[10];
    int maior, menor;

    // Leitura dos valores do vetor
    printf("Digite 10 valores:\n");
    for (int i = 0; i < 10; i++) {
        printf("Posição %d: ", i);
        scanf("%d", &x[i]);
    }

    // Inicializa maior e menor com o primeiro valor
    maior = menor = x[0];

    // Percorre o vetor para encontrar maior e menor
    for (int i = 1; i < 10; i++) {
        if (x[i] > maior) {
            maior = x[i];
        }
        if (x[i] < menor) {
            menor = x[i];
        }
    }

    // Exibe os resultados
    printf("\nMaior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    return 0;
}
