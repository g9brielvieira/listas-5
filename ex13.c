#include <stdio.h>

// Estrutura para data
struct Data {
    int dia;
    int mes;
    int ano;
};

// Estrutura para pessoa
struct Pessoa {
    char nome[100];
    struct Data nascimento;
};

// Função que retorna 1 se p1 é mais nova que p2, 0 caso contrário
int mais_nova(struct Pessoa p1, struct Pessoa p2) {
    if (p1.nascimento.ano > p2.nascimento.ano) return 1;
    if (p1.nascimento.ano < p2.nascimento.ano) return 0;

    if (p1.nascimento.mes > p2.nascimento.mes) return 1;
    if (p1.nascimento.mes < p2.nascimento.mes) return 0;

    if (p1.nascimento.dia > p2.nascimento.dia) return 1;
    return 0;
}

int main() {
    struct Pessoa pessoas[6];
    int i, mais_nova_idx = 0, mais_velha_idx = 0;

    // Leitura dos dados das 6 pessoas
    for (i = 0; i < 6; i++) {
        printf("Pessoa %d\n", i + 1);

        printf("Nome: ");
        fgets(pessoas[i].nome, sizeof(pessoas[i].nome), stdin);
        pessoas[i].nome[strcspn(pessoas[i].nome, "\n")] = '\0'; // remove '\n'

        printf("Data de nascimento (dia mes ano): ");
        scanf("%d %d %d", &pessoas[i].nascimento.dia, &pessoas[i].nascimento.mes, &pessoas[i].nascimento.ano);
        getchar(); // limpar buffer

        printf("\n");
    }

    // Inicializa índices de mais nova e mais velha
    mais_nova_idx = mais_velha_idx = 0;

    // Percorre para encontrar mais nova e mais velha
    for (i = 1; i < 6; i++) {
        if (mais_nova(pessoas[i], pessoas[mais_nova_idx])) {
            mais_nova_idx = i;
        }
        // Se p[i] for mais velha que o atual mais velha, atualiza
        if (mais_nova(pessoas[mais_velha_idx], pessoas[i])) {
            mais_velha_idx = i;
        }
    }

    // Exibe resultados
    printf("Pessoa mais nova: %s\n", pessoas[mais_nova_idx].nome);
    printf("Pessoa mais velha: %s\n", pessoas[mais_velha_idx].nome);

    return 0;
}

