#include <stdio.h>

struct Atleta {
    char nome[100];
    char esporte[50];
    int idade;
    float altura;
};

int main() {
    struct Atleta atletas[5];
    int i;
    int indice_mais_alto = 0, indice_mais_velho = 0;

    // Leitura dos dados dos atletas
    for (i = 0; i < 5; i++) {
        printf("Atleta %d\n", i + 1);

        printf("Nome: ");
        fgets(atletas[i].nome, sizeof(atletas[i].nome), stdin);
        atletas[i].nome[strcspn(atletas[i].nome, "\n")] = '\0';  // remove '\n'

        printf("Esporte: ");
        fgets(atletas[i].esporte, sizeof(atletas[i].esporte), stdin);
        atletas[i].esporte[strcspn(atletas[i].esporte, "\n")] = '\0';  // remove '\n'

        printf("Idade: ");
        scanf("%d", &atletas[i].idade);

        printf("Altura (em metros): ");
        scanf("%f", &atletas[i].altura);
        getchar();  // limpar o '\n' do buffer

        printf("\n");
    }

    // Encontrar o atleta mais alto e o mais velho
    for (i = 1; i < 5; i++) {
        if (atletas[i].altura > atletas[indice_mais_alto].altura) {
            indice_mais_alto = i;
        }
        if (atletas[i].idade > atletas[indice_mais_velho].idade) {
            indice_mais_velho = i;
        }
    }

    // Exibir os resultados
    printf("Atleta mais alto: %s (%.2f metros)\n", atletas[indice_mais_alto].nome, atletas[indice_mais_alto].altura);
    printf("Atleta mais velho: %s (%d anos)\n", atletas[indice_mais_velho].nome, atletas[indice_mais_velho].idade);

    return 0;
}
