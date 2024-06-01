#include <stdio.h>

int main() {
    // Lista de produtos de limpeza
    char* produtos[] = {"Veja", "Detergente", "Cloro 2l", "Desinfetante", "Desengordurante"};

    // Lista de valores dos produtos
    int valores[] = {5, 2, 20, 15, 8};

    // Número de produtos na lista
    int num_produtos = sizeof(valores) / sizeof(valores[0]);

    // Imprimir os produtos e seus valores
    for(int i = 0; i < num_produtos; i++) {
        printf("%s: %d reais\n", produtos[i], valores[i]);
    }

    return 0;
}
