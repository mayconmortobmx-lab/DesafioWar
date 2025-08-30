# DesafioWar
Projeto de estudo C/C++
#include <stdio.h>
#include <string.h>

struct Territorio {
    char nome[30];
    char cor[10];
    int tropas;
};

int main() {
    struct Territorio territorios[5];

    printf("=== Cadastro de Territorios ===\n\n");

    for(int i = 0; i < 5; i++) {
        printf("Cadastro do Territorio %d:\n", i + 1);

        printf("Nome: ");
        scanf(" %[^\n]", territorios[i].nome);

        printf("Cor do exército: ");
        scanf("%s", territorios[i].cor);

        printf("Quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);

        printf("\n");
    }

    printf("=== Dados dos Territorios ===\n");
    for(int i = 0; i < 5; i++) {
        printf("Territorio %d:\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do exército: %s\n", territorios[i].cor);
        printf("Quantidade de tropas: %d\n", territorios[i].tropas);
        printf("---------------------------\n");
    }

    return 0;
}
