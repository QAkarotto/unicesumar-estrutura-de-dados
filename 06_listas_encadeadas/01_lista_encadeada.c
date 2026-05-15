#include <stdio.h>
#include <stdlib.h>

typedef struct No
{
    int dado;
    struct No *prox;
} No;

/* Cria um novo nó */
No *criarNo(int valor)
{
    No *novo = malloc(sizeof(No));
    if (!novo)
    {
        fprintf(stderr, "Erro: malloc falhou\n");
        exit(EXIT_FAILURE);
    }
    novo->dado = valor;
    novo->prox = NULL;
    return novo;
}

/* Inserir no início */
void inserirInicio(No **head, int valor)
{
    No *novo = criarNo(valor);
    novo->prox = *head;
    *head = novo;
}

/* Inserir no fim */
void inserirFim(No **head, int valor)
{
    No *novo = criarNo(valor);
    if (*head == NULL)
    {
        *head = novo;
        return;
    }
    No *aux = *head;
    while (aux->prox != NULL)
        aux = aux->prox;
    aux->prox = novo;
}

/* Exibir lista */
void exibirLista(No *head)
{
    No *aux = head;
    while (aux != NULL)
    {
        printf("%d -> ", aux->dado);
        aux = aux->prox;
    }
    printf("NULL\n");
}

/* Liberar memória */
void liberarLista(No *head)
{
    No *aux = head;
    while (aux != NULL)
    {
        No *prox = aux->prox;
        free(aux);
        aux = prox;
    }
}

int main(void)
{
    No *head = NULL;
    printf("=== Lista Encadeada - Exemplo Enxuto ===\n");

    inserirFim(&head, 10);
    inserirFim(&head, 20);
    inserirFim(&head, 30);
    printf("Inicial: "); exibirLista(head);

    inserirInicio(&head, 5);
    printf("Após inserirInicio(5): "); exibirLista(head);

    return 0;
}
