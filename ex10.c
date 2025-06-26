#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char texto[200];
    char codificado[200];
    int i;

    // Leitura da string
    printf("Digite a string a ser codificada:\n");
    fgets(texto, sizeof(texto), stdin);

    // Remove o '\n' do final, se houver
    texto[strcspn(texto, "\n")] = '\0';

    // Codificação com o Código de César (deslocamento de 3)
    for (i = 0; texto[i] != '\0'; i++) {
        char c = texto[i];

        // Codifica letras minúsculas
        if (c >= 'a' && c <= 'z') {
            codificado[i] = ((c - 'a' + 3) % 26) + 'a';
        }
        // Codifica letras maiúsculas
        else if (c >= 'A' && c <= 'Z') {
            codificado[i] = ((c - 'A' + 3) % 26) + 'A';
        }
        // Mantém outros caracteres como estão
        else {
            codificado[i] = c;
        }
    }

    codificado[i] = '\0';  // Finaliza a nova string

    // Exibe o resultado
    printf("\nString codificada: %s\n", codificado);

    return 0;
}
