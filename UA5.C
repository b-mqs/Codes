#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int topo;
    int capacidade;
    int* array;
} Pilha;

Pilha* criaPilha(int capacidade) {
    Pilha* pilha = (Pilha*) malloc(sizeof(Pilha));
    pilha->capacidade = capacidade;
    pilha->topo = -1;
    pilha->array = (int*) malloc(pilha->capacidade * sizeof(int));
    return pilha;
}

int cheia(Pilha* pilha) {
    return pilha->topo == pilha->capacidade - 1;
}

int vazia(Pilha* pilha) {
    return pilha->topo == -1;
}

void empilha(Pilha* pilha, int item) {
    if (cheia(pilha)) {
        return;
    }
    pilha->array[++pilha->topo] = item;
    printf("%d empilhado\n", item);
}

int desempilha(Pilha* pilha) {
    if (vazia(pilha)) {
        return -1;
    }
    return pilha->array[pilha->topo--];
}

int main() {
    Pilha* pilha = criaPilha(100);

    empilha(pilha, 10);
    empilha(pilha, 20);
    empilha(pilha, 30);
    empilha(pilha, 31);

    printf("%d desempilhado\n", desempilha(pilha));

    return 0;
}
