#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definição da estrutura do nó da árvore
typedef struct TreeNode {
    char name[50];
    struct TreeNode* left;
    struct TreeNode* right;
} TreeNode;

// Função para criar um novo nó da árvore
TreeNode* createNode(char* name) {
    TreeNode* newNode = (TreeNode*)malloc(sizeof(TreeNode));
    strcpy(newNode->name, name);
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Função para adicionar um nó à esquerda
TreeNode* addLeft(TreeNode* parent, char* name) {
    parent->left = createNode(name);
    return parent->left;
}

// Função para adicionar um nó à direita
TreeNode* addRight(TreeNode* parent, char* name) {
    parent->right = createNode(name);
    return parent->right;
}

// Função para imprimir a árvore (pré-ordem)
void printTree(TreeNode* root) {
    if (root != NULL) {
        printf("%s\n", root->name);
        printTree(root->left);
        printTree(root->right);
    }
}

// Função principal
int main() {
    // Criar a raiz da árvore
    TreeNode* root = createNode("Comercio");

    // Adicionar departamentos e categorias de produtos
    TreeNode* dept1 = addLeft(root, "Alimentos");
    TreeNode* dept2 = addRight(root, "Roupas");

    // Adicionar subcategorias ao departamento de Alimentos
    addLeft(dept1, "Frutas");
    addRight(dept1, "Bebidas");

    // Adicionar subcategorias ao departamento de Roupas
    addLeft(dept2, "Masculino");
    addRight(dept2, "Feminino");

    // Imprimir a árvore
    printf("Estrutura do Comércio:\n");
    printTree(root);

    return 0;
}
