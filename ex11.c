#include <stdio.h>

// Definição da estrutura Pessoa
struct Pessoa {
    char nome[100];
    int idade;
    char endereco[150];
};

int main() {
    struct Pessoa p;

    // Leitura dos dados
    printf("Digite o nome: ");
    fgets(p.nome, sizeof(p.nome), stdin);
    p.nome[strcspn(p.nome, "\n")] = '\0';  // Remove o '\n'

    printf("Digite a idade: ");
    scanf("%d", &p.idade);
    getchar(); // Limpa o '\n' do buffer após scanf

    printf("Digite o endereço: ");
    fgets(p.endereco, sizeof(p.endereco), stdin);
    p.endereco[strcspn(p.endereco, "\n")] = '\0'; // Remove o '\n'

    // Impressão dos dados
    printf("\nDados da pessoa:\n");
    printf("Nome: %s\n", p.nome);
    printf("Idade: %d\n", p.idade);
    printf("Endereço: %s\n", p.endereco);

    return 0;
}
