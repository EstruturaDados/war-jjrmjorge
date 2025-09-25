#include <stdio.h>
#include <string.h>

// Definição da struct Territorio
// Cada território terá: nome, cor do exército e número de tropas
struct Territorio {
    char nome[30];
    char cor[10];
    int tropas;
};

int main() {
    // Vetor que armazenará até 5 territórios
    struct Territorio territorios[5];

    // Entrada dos dados
    printf("=== Cadastrando 5 território do nosso mundo ===\n\n");

    for (int i = 0; i < 5; i++) {
        printf("---Cadastrando Território--- %d:\n", i + 1);

        // Leitura do nome do território
        printf("Nome do Território: ");
        scanf("%s", territorios[i].nome); 
        // aqui usamos %s para simplificar. fgets seria melhor caso o nome tivesse espaços.

        // Leitura da cor do exército
        printf("Cor do exército: ");
        scanf("%s", territorios[i].cor);

        // Leitura da quantidade de tropas
        printf("Número de tropas: ");
        scanf("%d", &territorios[i].tropas);

        printf("\n"); // Linha em branco para separar os cadastros
    }

    // Exibição dos dados cadastrados
    printf("=== Dados dos Territórios Cadastrados ===\n\n");

    for (int i = 0; i < 5; i++) {
        printf("TERRITÓRIO %d:\n", i + 1);
        printf("- Nome: %s\n", territorios[i].nome);
        printf("- Dominado por: Exército %s\n", territorios[i].cor); // <<< aqui concatena
        printf("- Tropas: %d\n", territorios[i].tropas);
        printf("-----------------------------\n");
    }

    return 0;
}
