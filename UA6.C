#include <stdio.h>
#include <stdlib.h>

// Definindo a estrutura do nó da fila
struct Node {
    int num;
    struct Node* prox;
};

// Função para inserir um elemento na fila
void inserir(struct Node** fila, int valor) {
    struct Node* novoNo = (struct Node*)malloc(sizeof(struct Node));
    novoNo->num = valor;
    novoNo->prox = NULL;

    if (*fila == NULL) {
        *fila = novoNo;
    } else {
        struct Node* temp = *fila;
        while (temp->prox != NULL) {
            temp = temp->prox;
        }
        temp->prox = novoNo;
    }
}

// Função para remover o primeiro elemento da fila
void remover(struct Node** fila) {
    if (*fila == NULL) {
        printf("A fila está vazia!\n");
        return;
    }

    struct Node* temp = *fila;
    *fila = (*fila)->prox;
    free(temp);
}

// Função para imprimir os elementos da fila
void imprimir(struct Node* fila) {
    printf("Elementos da fila: ");
    while (fila != NULL) {
        printf("%d ", fila->num);
        fila = fila->prox;
    }
    printf("\n");
}

int main() {
    struct Node* fila = NULL;

    inserir(&fila, 1);
    inserir(&fila, 2);
    inserir(&fila, 3);
    inserir(&fila, 4);

    imprimir(fila);
    remover(&fila);
    imprimir(fila);

    return 0;
}
