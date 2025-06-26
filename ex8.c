#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    char substituto;
    int i, vogais = 0;

    // Leitura da string
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    // Remove o '\n' do final, se houver
    str[strcspn(str, "\n")] = '\0';

    // Leitura do caractere substituto
    printf("Digite um caractere para substituir as vogais: ");
    scanf(" %c", &substituto);

    // Contagem e substituição das vogais
    for (i = 0; str[i] != '\0'; i++) {
        char c = tolower(str[i]); // para comparar sem diferenciar maiúsculas/minúsculas
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            str[i] = substituto;
            vogais++;
        }
    }

    // Exibição do resultado
    printf("\nNova string: %s\n", str);
    printf("Quantidade de vogais substituídas: %d\n", vogais);

    return 0;
}
