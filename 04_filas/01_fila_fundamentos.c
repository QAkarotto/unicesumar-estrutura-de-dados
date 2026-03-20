/* FILAS EM C - 01: Fundamentos (arquivo unico e simples) */

#include <stdio.h>
#include <stdlib.h>

typedef struct elemento {
    int valor;
    struct elemento *proximo;
} Elemento;

typedef struct fila {
    Elemento *inicio;
    Elemento *fim;
    int tamanho;
} Fila;

Fila *iniciar() {
    Fila *f = (Fila *)malloc(sizeof(Fila));
    if (f == NULL) {
        printf("Erro: falta de memoria ao iniciar fila.\n");
        return NULL;
    }

    f->inicio = NULL;
    f->fim = NULL;
    f->tamanho = 0;
    return f;
}

int empty(Fila *f) {
    return f == NULL || f->inicio == NULL;
}

int size(Fila *f) {
    if (f == NULL) {
        return 0;
    }
    return f->tamanho;
}

void enqueue(Fila *f, int valor) {
    if (f == NULL) {
        return;
    }

    Elemento *e = (Elemento *)malloc(sizeof(Elemento));
    if (e == NULL) {
        printf("Erro: falta de memoria em enqueue.\n");
        return;
    }

    e->valor = valor;
    e->proximo = NULL;

    if (empty(f)) {
        f->inicio = e;
        f->fim = e;
    } else {
        f->fim->proximo = e;
        f->fim = e;
    }

    f->tamanho = f->tamanho + 1;
}

int front(Fila *f) {
    if (empty(f)) {
        printf("Fila vazia!\n\n");
        return -1;
    }
    return f->inicio->valor;
}

int dequeue(Fila *f) {
    if (empty(f)) {
        printf("Fila vazia.\n\n");
        return -1;
    }

    Elemento *e = f->inicio;
    int valor = e->valor;

    f->inicio = f->inicio->proximo;
    if (f->inicio == NULL) {
        f->fim = NULL;
    }

    f->tamanho = f->tamanho - 1;
    free(e);
    e = NULL;

    return valor;
}

void imprimir(Fila *f) {
    printf("Inicio -> ");
    for (Elemento *atual = f->inicio; atual != NULL; atual = atual->proximo) {
        printf("%d -> ", atual->valor);
    }
    printf("NULL <- Fim\n");
}

void liberar(Fila *f) {
    if (f == NULL) {
        return;
    }

    while (!empty(f)) {
        dequeue(f);
    }

    free(f);
}

int main() {
    Fila *f = iniciar();
    if (f == NULL) {
        return 1;
    }

    printf("===== Fila Simples com int =====\n\n");

    printf("1) enqueue de 10, 20, 30\n");
    enqueue(f, 10);
    enqueue(f, 20);
    enqueue(f, 30);
    imprimir(f);
    printf("\n");

    printf("2) front, size e empty\n");
    printf("front = %d\n", front(f));
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
