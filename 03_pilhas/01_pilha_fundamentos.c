/* PILHAS EM C - 01: Fundamentos (arquivo unico e simples) */

#include <stdio.h>
#include <stdlib.h>

typedef struct elemento {
    int valor;
    struct elemento *proximo;
} Elemento;

typedef struct pilha {
    Elemento *topo;
    int tamanho;
} Pilha;

Pilha *iniciar() {
    Pilha *p = (Pilha *)malloc(sizeof(Pilha));
    if (p == NULL) {
        printf("Erro: falta de memoria ao iniciar pilha.\n");
        return NULL;
    }
    p->topo = NULL;
    p->tamanho = 0;
    return p;
}

int empty(Pilha *p) {
    return p == NULL || p->topo == NULL;
}

int size(Pilha *p) {
    if (p == NULL) {
        return 0;
    }
    return p->tamanho;
}

void push(Pilha *p, int valor) {
    if (p == NULL) {
        return;
    }

    Elemento *e = (Elemento *)malloc(sizeof(Elemento));
    if (e == NULL) {
        printf("Erro: falta de memoria em push.\n");
        return;
    }

    e->valor = valor;
    e->proximo = p->topo;
    p->topo = e;
    p->tamanho = p->tamanho + 1;
}

int top(Pilha *p) {
    if (empty(p)) {
        printf("Pilha vazia!\n\n");
        return -1;
    }
    return p->topo->valor;
}

int pop(Pilha *p) {
    Elemento *e;
    int valor;

    if (!empty(p)) {
        e = p->topo;
        valor = e->valor;
        p->topo = p->topo->proximo;
        p->tamanho = p->tamanho - 1;
        free(e);
        e = NULL;
        return valor;
    }

    printf("Pilha vazia.\n\n");
    return -1;
}

void imprimir(Pilha *p) {
    printf("Topo -> ");
    for (Elemento *atual = p->topo; atual != NULL; atual = atual->proximo) {
        printf("%d -> ", atual->valor);
    }
    printf("NULL\n");
}

void liberar(Pilha *p) {
    if (p == NULL) {
        return;
    }
    while (!empty(p)) {
        pop(p);
    }
    free(p);
}

int main() {
    Pilha *p = iniciar();
    if (p == NULL) {
        return 1;
    }

    printf("===== Pilha Simples com int =====\n\n");

    printf("1) push de 10, 20, 30\n");
    push(p, 10);
    push(p, 20);
    push(p, 30);
    imprimir(p);
    printf("\n");

    printf("2) top, size e empty\n");
    printf("top = %d\n", top(p));
    printf("size = %d\n", size(p));
    printf("empty = %d\n\n", empty(p));

    printf("3) pop\n");
    printf("pop removeu = %d\n", pop(p));
    imprimir(p);
    printf("\n");

    printf("4) esvaziando\n");
    printf("pop removeu = %d\n", pop(p));
    printf("pop removeu = %d\n", pop(p));
    printf("empty = %d\n", empty(p));
    printf("pop em pilha vazia = %d\n", pop(p));

    liberar(p);
    return 0;
}