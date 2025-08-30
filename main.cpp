#include <iostream>
using namespace std;

int main() {
    cout << "Olá, mundo!" << endl;
    return 0;
}
#include <stdio.h>
#include <string.h>

// Definição da struct Territorio
// Cada território terá: nome, cor do exército e quantidade de tropas
struct Territorio {
    char nome[30];
    char cor[10];
    int tropas;
};

int main() {
    // Criando um vetor para armazenar 5 territórios
    struct Territorio territorios[5];

    printf("=== Cadastro de Territorios ===\n\n");

    // Laço para cadastrar os 5 territórios
    for(int i = 0; i < 5; i++) {
        printf("Cadastro do Territorio %d:\n", i + 1);

        printf("Nome: ");
        scanf(" %[^\n]", territorios[i].nome); // Lê string com espaços

        printf("Cor do exército: ");
        scanf("%s", territorios[i].cor); // Lê string sem espaços

        printf("Quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);

        printf("\n");
    }

    // Exibição dos dados cadastrados
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
