/* FILAS EM C - 01: Fundamentos (arquivo unico e simples) */

#include <stdio.h>
#include <stdlib.h>

typedef struct elemento
{
    int valor;
    
    struct elemento *proximo;
} Elemento;

typedef struct fila
{
    Elemento *cabeca;
    Elemento *fim;
    int tamanho;
} Fila;

Fila *iniciar()
{
    Fila *f = (Fila *)malloc(sizeof(Fila));
    if (f == NULL)
    {
        printf("Erro: falta de memoria ao iniciar fila.\n");
        return NULL;
    }

    f->cabeca = NULL;
    f->fim = NULL;
    f->tamanho = 0;
    return f;
}

int empty(Fila *f)
{
    return f->tamanho == 0 || f->cabeca == NULL;
}

int size(Fila *f)
{
    if (f == NULL)
    {
        return 0;
    }
    return f->tamanho;
}

void enqueue(Fila *f, int valor)
{
    if (f == NULL)
    {
        return;
    }

    Elemento *e = (Elemento *)malloc(sizeof(Elemento));
    if (e == NULL)
    {
        printf("Erro: falta de memoria em enqueue.\n");
        return;
    }

    e->valor = valor;
    e->proximo = NULL;

    if (f->fim != NULL)
    {
        f->fim->proximo = e;
    }
    else
    {
        f->cabeca = e;
    }
    f->fim = e;
    f->tamanho = f->tamanho + 1;
}

int head(Fila *f)
{
    if (empty(f))
    {
        printf("Fila vazia!\n\n");
        return -1;
    }
    return f->cabeca->valor;
}

int dequeue(Fila *f)
{
    if (empty(f))
    {
        printf("Fila vazia.\n\n");
        return -1;
    }

    Elemento *e = f->cabeca;
    int valor = e->valor;

    f->cabeca = e->proximo;
    if (empty(f))
    {
        f->fim = NULL;
    }

    f->tamanho = f->tamanho - 1;
    free(e);
    e = NULL;

    return valor;
}

void imprimir(Fila *f)
{
    printf("cabeca -> ");
    for (Elemento *atual = f->cabeca; atual != NULL; atual = atual->proximo)
    {
        printf("%d -> ", atual->valor);
    }
    printf("NULL <- Fim\n");
}

void liberar(Fila *f)
{
    if (f == NULL)
    {
        return;
    }

    while (!empty(f))
    {
        dequeue(f);
    }

    free(f);
}

int main()
{
    Fila *f = iniciar();
    if (f == NULL)
    {
        return 1;
    }

    printf("===== Fila Simples com int =====\n\n");

    printf("1) enqueue de 10, 20, 30\n");
    enqueue(f, 10);
    enqueue(f, 20);
    enqueue(f, 30);
    imprimir(f);
    printf("\n");

    printf("2) head, size e empty\n");
    printf("head = %d\n", head(f));
    printf("size = %d\n", size(f));
    printf("empty = %d\n\n", empty(f));

    printf("3) dequeue\n");
    printf("dequeue removeu = %d\n", dequeue(f));
    imprimir(f);
    printf("\n");

    printf("4) esvaziando\n");
    printf("dequeue removeu = %d\n", dequeue(f));
    printf("dequeue removeu = %d\n", dequeue(f));
    printf("empty = %d\n", empty(f));
    printf("dequeue em fila vazia = %d\n", dequeue(f));

    liberar(f);
    return 0;
}
