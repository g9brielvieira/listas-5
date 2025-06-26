#include <stdio.h>

// Definição da estrutura Aluno
struct Aluno {
    int matricula;
    char nome[100];
    float notas[3];
};

int main() {
    struct Aluno alunos[5];
    int i, aluno_maior_media = 0;
    float maior_media = -1;

    // Leitura dos dados dos 5 alunos
    for (i = 0; i < 5; i++) {
        printf("Aluno %d\n", i + 1);

        printf("Matrícula: ");
        scanf("%d", &alunos[i].matricula);
        getchar(); // limpar o \n do buffer

        printf("Nome: ");
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';  // remover \n

        printf("Digite as 3 notas:\n");
        for (int j = 0; j < 3; j++) {
            printf("Nota %d: ", j + 1);
            scanf("%f", &alunos[i].notas[j]);
        }
        getchar(); // limpar buffer

        printf("\n");
    }

    // Encontrar aluno com maior média
    for (i = 0; i < 5; i++) {
        float soma = 0;
        for (int j = 0; j < 3; j++) {
            soma += alunos[i].notas[j];
        }
        float media = soma / 3;

        if (media > maior_media) {
            maior_media = media;
            aluno_maior_media = i;
        }
    }

    // Exibir nome e notas do aluno com maior média
    printf("Aluno com maior média:\n");
    printf("Nome: %s\n", alunos[aluno_maior_media].nome);
    printf("Notas: %.2f, %.2f, %.2f\n", 
           alunos[aluno_maior_media].notas[0],
           alunos[aluno_maior_media].notas[1],
           alunos[aluno_maior_media].notas[2]);
    printf("Média: %.2f\n", maior_media);

    return 0;
}
