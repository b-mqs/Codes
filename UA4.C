#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definindo a estrutura do nó
struct Node {
  char nome[50];
  float nota;
  struct Node* next;
};

// Função para inserir um nó no início da lista
void push(struct Node** head_ref, char* nome, float nota) {
  struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
  strcpy(new_node->nome, nome);
  new_node->nota = nota;
  new_node->next = (*head_ref);
  (*head_ref)    = new_node;
}

int main() {
  struct Node* head = NULL;

  push(&head, "Joao Pedro", 8.5);
  push(&head, "Maria", 7.0);
  push(&head, "Paulo", 9.5);
  push(&head, "Joaquim", 6.0);
  push(&head, "Luanna", 8.0);

  struct Node* temp = head;
  while(temp != NULL) {
    printf("Nome: %s, Nota: %.2f\n", temp->nome, temp->nota);
    temp = temp->next;
  }

  return 0;
}
