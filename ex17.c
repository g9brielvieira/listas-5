#include <stdio.h>

// Função para calcular média
float calcula_media(float n1, float n2, float n3, char tipo) {
    if (tipo == 'A' || tipo == 'a') {
        // Média aritmética simples
        return (n1 + n2 + n3) / 3.0f;
    } else if (tipo == 'P' || tipo == 'p') {
        // Média ponderada com pesos 5, 3 e 2
        return (n1 * 5 + n2 * 3 + n3 * 2) / 10.0f;
    } else {
        // Caso letra inválida, retorna -1 como erro
        return -1.0f;
    }
}

int main() {
    float nota1, nota2, nota3, media;
    char tipo;

    printf("Digite as três notas:\n");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    printf("Digite o tipo de média (A para aritmética, P para ponderada): ");
    scanf(" %c", &tipo);

    media = calcula_media(nota1, nota2, nota3, tipo);

    if (media < 0) {
        printf("Tipo de média inválido.\n");
    } else {
        printf("Média calculada: %.2f\n", media);
    }

    return 0;
}
