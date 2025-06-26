#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int inicio = 0, fim, eh_palindromo = 1;

    // Leitura da string
    printf("Digite uma palavra: ");
    fgets(str, sizeof(str), stdin);

    // Remove o '\n' se existir
    str[strcspn(str, "\n")] = '\0';

    // Define o índice final
    fim = strlen(str) - 1;

    // Verifica se é palíndromo (ignorando maiúsculas/minúsculas)
    while (inicio < fim) {
        if (tolower(str[inicio]) != tolower(str[fim])) {
            eh_palindromo = 0;
            break;
        }
        inicio++;
        fim--;
    }

    // Exibe o resultado
    if (eh_palindromo) {
        printf("É um palíndromo!\n");
    } else {
        printf("Não é um palíndromo.\n");
    }

    return 0;
}
