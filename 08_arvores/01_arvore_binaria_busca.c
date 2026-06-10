#include <stdio.h>
#include <stdlib.h>

typedef struct No
{
    int valor;
    struct No *esquerda;
    struct No *direita;
} No;

/* Cria um novo nó da árvore */
No *criarNo(int valor)
{
    No *novo = malloc(sizeof(No));
    if (novo == NULL)
    {
        fprintf(stderr, "Erro: malloc falhou\n");
        exit(EXIT_FAILURE);
    }

    novo->valor = valor;
    novo->esquerda = NULL;
    novo->direita = NULL;
    return novo;
}

/* Insere um valor na árvore binária de busca */
No *inserir(No *raiz, int valor)
{
    if (raiz == NULL)
        return criarNo(valor);

    if (valor < raiz->valor)
        raiz->esquerda = inserir(raiz->esquerda, valor);
    else if (valor > raiz->valor)
        raiz->direita = inserir(raiz->direita, valor);

    return raiz;
}

/* Busca um valor na árvore */
No *buscar(No *raiz, int valor)
{
    if (raiz == NULL || raiz->valor == valor)
        return raiz;

    if (valor < raiz->valor)
        return buscar(raiz->esquerda, valor);

    return buscar(raiz->direita, valor);
}

/* Retorna o nó com menor valor na subárvore */
No *menorNo(No *raiz)
{
    No *atual = raiz;

    while (atual != NULL && atual->esquerda != NULL)
        atual = atual->esquerda;

    return atual;
}

/* Remove um valor da árvore */
No *remover(No *raiz, int valor)
{
    if (raiz == NULL)
        return NULL;

    if (valor < raiz->valor)
    {
        raiz->esquerda = remover(raiz->esquerda, valor);
    }
    else if (valor > raiz->valor)
    {
        raiz->direita = remover(raiz->direita, valor);
    }
    else
    {
        if (raiz->esquerda == NULL)
        {
            No *direita = raiz->direita;
            free(raiz);
            return direita;
        }

        if (raiz->direita == NULL)
        {
            No *esquerda = raiz->esquerda;
            free(raiz);
            return esquerda;
        }

        No *sucessor = menorNo(raiz->direita);
        raiz->valor = sucessor->valor;
        raiz->direita = remover(raiz->direita, sucessor->valor);
    }

    return raiz;
}

/* Percursos clássicos da árvore */
void imprimirEmOrdem(No *raiz)
{
    if (raiz != NULL)
    {
        imprimirEmOrdem(raiz->esquerda);
        printf("%d ", raiz->valor);
        imprimirEmOrdem(raiz->direita);
    }
}

void imprimirPreOrdem(No *raiz)
{
    if (raiz != NULL)
    {
        printf("%d ", raiz->valor);
        imprimirPreOrdem(raiz->esquerda);
        imprimirPreOrdem(raiz->direita);
    }
}

void imprimirPosOrdem(No *raiz)
{
    if (raiz != NULL)
    {
        imprimirPosOrdem(raiz->esquerda);
        imprimirPosOrdem(raiz->direita);
        printf("%d ", raiz->valor);
    }
}

/* Calcula a altura da árvore */
int altura(No *raiz)
{
    if (raiz == NULL)
        return 0;

    int alturaEsquerda = altura(raiz->esquerda);
    int alturaDireita = altura(raiz->direita);

    return 1 + (alturaEsquerda > alturaDireita ? alturaEsquerda : alturaDireita);
}

/* Conta quantos nós existem na árvore */
int contarNos(No *raiz)
{
    if (raiz == NULL)
        return 0;

    return 1 + contarNos(raiz->esquerda) + contarNos(raiz->direita);
}

/* Libera toda a memória ocupada pela árvore */
void liberarArvore(No *raiz)
{
    if (raiz != NULL)
    {
        liberarArvore(raiz->esquerda);
        liberarArvore(raiz->direita);
        free(raiz);
    }
}

int main(void)
{
    No *raiz = NULL;

    printf("=== Exemplo de Arvore Binaria de Busca em C ===\n\n");

    int valores[] = {50, 30, 70, 20, 40, 60, 80};
    size_t quantidade = sizeof(valores) / sizeof(valores[0]);

    for (size_t i = 0; i < quantidade; i++)
        raiz = inserir(raiz, valores[i]);

    printf("Percurso em ordem: ");
    imprimirEmOrdem(raiz);
    printf("\n");

    printf("Percurso pre-ordem: ");
    imprimirPreOrdem(raiz);
    printf("\n");

    printf("Percurso pos-ordem: ");
    imprimirPosOrdem(raiz);
    printf("\n\n");

    int chaveBusca = 60;
    No *resultado = buscar(raiz, chaveBusca);
    if (resultado != NULL)
        printf("Busca: valor %d encontrado na arvore.\n", chaveBusca);
    else
        printf("Busca: valor %d nao encontrado na arvore.\n", chaveBusca);

    chaveBusca = 99;
    resultado = buscar(raiz, chaveBusca);
    if (resultado != NULL)
        printf("Busca: valor %d encontrado na arvore.\n", chaveBusca);
    else
        printf("Busca: valor %d nao encontrado na arvore.\n", chaveBusca);

    printf("\nAltura da arvore: %d\n", altura(raiz));
    printf("Quantidade de nos: %d\n", contarNos(raiz));

    printf("\nRemovendo o valor 30...\n");
    raiz = remover(raiz, 30);

    printf("Percurso em ordem apos remocao: ");
    imprimirEmOrdem(raiz);
    printf("\n");

    liberarArvore(raiz);
    return 0;
}
