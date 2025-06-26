#include <stdio.h>

// Função para encontrar maior e menor valores no vetor
void maior_menor(int vetor[], int tamanho, int *maior, int *menor) {
    *maior = vetor[0];
    *menor = vetor[0];

    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > *maior) {
            *maior = vetor[i];
        }
        if (vetor[i] < *menor) {
            *menor = vetor[i];
        }
    }
}

int main() {
    int N;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &N);

    int vetor[N];

    printf("Digite %d valores:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &vetor[i]);
    }

    int maior, menor;
    maior_menor(vetor, N, &maior, &menor);

    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    return 0;
}
