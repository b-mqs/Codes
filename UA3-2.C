#include <stdio.h>

// Definindo a estrutura do registro
typedef struct {
    char nome[50];
    float nota;
} Aluno;

int main() {
    // Definindo um vetor de registros
    Aluno alunos[2];

    // Preenchendo os registros
    for (int i = 0; i < 2; i++) {
        printf("Digite o nome do aluno %d: ", i+1);
        scanf("%s", alunos[i].nome);
        printf("Digite a nota do aluno %d: ", i+1);
        scanf("%f", &alunos[i].nota);
    }

    // Imprimindo os registros
    for (int i = 0; i < 2; i++) {
        printf("Aluno %d\n", i+1);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Nota: %.2f\n", alunos[i].nota);
    }

    return 0;
}