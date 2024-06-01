#include <stdio.h>

// Definindo a estrutura do registro
typedef struct {
    char nome[50];
    int idade;
    char genero;
} Pessoa;

int main() {
    // Definindo um vetor de registros
    Pessoa pessoas[2];

    // Preenchendo os registros
    for (int i = 0; i < 2; i++) {
        printf("Digite o nome da pessoa %d: ", i+1);
        scanf("%s", pessoas[i].nome);
        printf("Digite a idade da pessoa %d: ", i+1);
        scanf("%d", &pessoas[i].idade);
        printf("Digite o genero da pessoa %d (M para masculino, F para feminino): ", i+1);
        scanf(" %c", &pessoas[i].genero);
    }

    // Imprimindo os registros
    for (int i = 0; i < 2; i++) {
        printf("Pessoa %d\n", i+1);
        printf("Nome: %s\n", pessoas[i].nome);
        printf("Idade: %d\n", pessoas[i].idade);
        printf("Genero: %c\n", pessoas[i].genero);
    }

    return 0;
}
