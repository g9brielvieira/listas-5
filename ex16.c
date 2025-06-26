#include <stdio.h>
#include <math.h>

// Função que verifica se n é quadrado perfeito
int eh_quadrado_perfeito(int n) {
    if (n < 0) {
        return 0; // números negativos não são quadrados perfeitos
    }

    int raiz = (int) sqrt(n);
    return (raiz * raiz == n);
}

int main() {
    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    if (eh_quadrado_perfeito(num)) {
        printf("%d é um quadrado perfeito.\n", num);
    } else {
        printf("%d não é um quadrado perfeito.\n", num);
    }

    return 0;
}
