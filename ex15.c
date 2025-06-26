#include <stdio.h>

typedef enum {
    JANEIRO = 1, FEVEREIRO, MARCO, ABRIL, MAIO, JUNHO,
    JULHO, AGOSTO, SETEMBRO, OUTUBRO, NOVEMBRO, DEZEMBRO
} Mes;

int main() {
    int mes_num;
    Mes mes;
    int dias;

    // Leitura do número do mês
    printf("Digite o número do mês (1 a 12): ");
    scanf("%d", &mes_num);

    if (mes_num < 1 || mes_num > 12) {
        printf("Número inválido. Digite um valor entre 1 e 12.\n");
        return 1;
    }

    mes = (Mes)mes_num;

    // Determina a quantidade de dias do mês (considera ano não bissexto)
    switch (mes) {
        case JANEIRO: dias = 31; printf("Janeiro"); break;
        case FEVEREIRO: dias = 28; printf("Fevereiro"); break;
        case MARCO: dias = 31; printf("Março"); break;
        case ABRIL: dias = 30; printf("Abril"); break;
        case MAIO: dias = 31; printf("Maio"); break;
        case JUNHO: dias = 30; printf("Junho"); break;
        case JULHO: dias = 31; printf("Julho"); break;
        case AGOSTO: dias = 31; printf("Agosto"); break;
        case SETEMBRO: dias = 30; printf("Setembro"); break;
        case OUTUBRO: dias = 31; printf("Outubro"); break;
        case NOVEMBRO: dias = 30; printf("Novembro"); break;
        case DEZEMBRO: dias = 31; printf("Dezembro"); break;
    }

    printf(" tem %d dias.\n", dias);

    return 0;
}
