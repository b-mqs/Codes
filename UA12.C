#include <stdio.h>

#define V 5 // Número de vértices no grafo

// Função para imprimir a matriz de adjacências
void printGraph(int graph[][V]) {
    for (int i = 0; i < V; ++i) {
        for (int j = 0; j < V; ++j) {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // Inicializa a matriz de adjacências com zeros
    int graph[V][V] = {0};

    // Adiciona as arestas ao grafo
    graph[0][1] = 1; graph[1][0] = 1;
    graph[1][2] = 1; graph[2][1] = 1;
    graph[2][3] = 1; graph[3][2] = 1;
    graph[3][4] = 1; graph[4][3] = 1;
    
    // Conecta o 'telhado' da casa
    graph[4][0] = 1; graph[0][4] = 1;

    // Imprime a matriz de adjacências
    printf("Matriz de adjacências do grafo:\n");
    printGraph(graph);

    return 0;
}
