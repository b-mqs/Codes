#include <stdio.h>

// Função para realizar a pesquisa binária em um array ordenado
int pesquisaBinaria(int array[], int tamanho, int chave) {
    int inicio = 0;
    int fim = tamanho - 1;
    int meio;

    while (inicio <= fim) {
        meio = (inicio + fim) / 2;

        // Se a chave estiver no meio, retorna a posição
        if (array[meio] == chave)
            return meio;
        // Se a chave for menor que o elemento do meio, busca na metade esquerda
        else if (array[meio] > chave)
            fim = meio - 1;
        // Se a chave for maior que o elemento do meio, busca na metade direita
        else
            inicio = meio + 1;
    }

    // Retorna -1 se a chave não for encontrada
    return -1;
}

int main() {
    int array[20] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39};
    int tamanho = 20;
    int chave;

    printf("Digite o valor a ser pesquisado: ");
    scanf("%d", &chave);

    int posicao = pesquisaBinaria(array, tamanho, chave);

    if (posicao != -1)
        printf("O valor %d foi encontrado na posicao %d.\n", chave, posicao);
    else
        printf("O valor %d nao foi encontrado no array.\n", chave);

    return 0;
}
