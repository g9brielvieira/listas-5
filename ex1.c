#include <stdio.h>

int main() {
    float numeros[5];
    float soma = 0, media;

    // Leitura dos 5 valores
    for (int i = 0; i < 5; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &numeros[i]);
        soma += numeros[i];
    }

    // Cálculo da média
    media = soma / 5;

    // Exibição dos valores
    printf("\nValores lidos:\n");
    for (int i = 0; i < 5; i++) {
        printf("Valor %d: %.2f\n", i + 1, numeros[i]);
    }

    // Exibição da média
    printf("\nMédia dos valores: %.2f\n", media);

    return 0;
}
