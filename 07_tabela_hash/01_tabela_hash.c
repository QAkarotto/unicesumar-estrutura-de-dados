#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_PADRAO 10

typedef struct No
{
    int chave;
    int valor;
    struct No *prox;
} No;

typedef struct TabelaHash
{
    int tamanho;
    No **buckets;
} TabelaHash;

/* Cria um novo nó */
No *criarNo(int chave, int valor)
{
    No *novo = malloc(sizeof(No));
    if (novo == NULL)
    {
        fprintf(stderr, "Erro: malloc falhou\n");
        exit(EXIT_FAILURE);
    }

    novo->chave = chave;
    novo->valor = valor;
    novo->prox = NULL;
    return novo;
}

/* Cria a tabela hash */
TabelaHash *criarTabela(int tamanho)
{
    TabelaHash *tabela = malloc(sizeof(TabelaHash));
    if (tabela == NULL)
    {
        fprintf(stderr, "Erro: malloc falhou\n");
        exit(EXIT_FAILURE);
    }

    tabela->tamanho = tamanho;
    tabela->buckets = calloc((size_t)tamanho, sizeof(No *));
    if (tabela->buckets == NULL)
    {
        fprintf(stderr, "Erro: calloc falhou\n");
        free(tabela);
        exit(EXIT_FAILURE);
    }

    return tabela;
}

/* Função hash simples */
int hashSimples(TabelaHash *tabela, int chave)
{
    int indice = chave % tabela->tamanho;
    if (indice < 0)
        indice += tabela->tamanho;
    return indice;
}

/* Insere ou atualiza uma chave na tabela */
void inserir(TabelaHash *tabela, int chave, int valor)
{
    int indice = hashSimples(tabela, chave);
    No *atual = tabela->buckets[indice];

    while (atual != NULL)
    {
        if (atual->chave == chave)
        {
            atual->valor = valor;
            return;
        }
        atual = atual->prox;
    }

    No *novo = criarNo(chave, valor);
    novo->prox = tabela->buckets[indice];
    tabela->buckets[indice] = novo;
}

/* Busca um elemento pela chave */
No *buscar(TabelaHash *tabela, int chave)
{
    int indice = hashSimples(tabela, chave);
    No *atual = tabela->buckets[indice];

    while (atual != NULL)
    {
        if (atual->chave == chave)
            return atual;
        atual = atual->prox;
    }

    return NULL;
}

/* Remove um elemento pela chave */
int remover(TabelaHash *tabela, int chave)
{
    int indice = hashSimples(tabela, chave);
    No *atual = tabela->buckets[indice];
    No *anterior = NULL;

    while (atual != NULL)
    {
        if (atual->chave == chave)
        {
            if (anterior == NULL)
                tabela->buckets[indice] = atual->prox;
            else
                anterior->prox = atual->prox;

            free(atual);
            return 1;
        }

        anterior = atual;
        atual = atual->prox;
    }

    return 0;
}

/* Imprime a tabela hash */
void imprimirTabela(TabelaHash *tabela)
{
    for (int i = 0; i < tabela->tamanho; i++)
    {
        printf("[%d] -> ", i);
        No *atual = tabela->buckets[i];

        if (atual == NULL)
        {
            printf("vazio");
        }
        else
        {
            while (atual != NULL)
            {
                printf("(%d, %d)", atual->chave, atual->valor);
                if (atual->prox != NULL)
                    printf(" -> ");
                atual = atual->prox;
            }
        }

        printf("\n");
    }
}

/* Libera toda a memória da tabela */
void liberarTabela(TabelaHash *tabela)
{
    for (int i = 0; i < tabela->tamanho; i++)
    {
        No *atual = tabela->buckets[i];
        while (atual != NULL)
        {
            No *prox = atual->prox;
            free(atual);
            atual = prox;
        }
    }

    free(tabela->buckets);
    free(tabela);
}

int main(void)
{
    TabelaHash *tabela = criarTabela(TAMANHO_PADRAO);

    printf("=== Exemplo de Tabela Hash em C ===\n\n");

    inserir(tabela, 15, 150);
    inserir(tabela, 25, 250);
    inserir(tabela, 35, 350);
    inserir(tabela, 7, 70);
    inserir(tabela, 17, 170);

    printf("Tabela apos insercoes:\n");
    imprimirTabela(tabela);
    printf("\n");

    No *resultado = buscar(tabela, 25);
    if (resultado != NULL)
        printf("Busca: chave %d encontrada com valor %d\n", resultado->chave, resultado->valor);
    else
        printf("Busca: chave 25 nao encontrada\n");

    resultado = buscar(tabela, 99);
    if (resultado != NULL)
        printf("Busca: chave %d encontrada com valor %d\n", resultado->chave, resultado->valor);
    else
        printf("Busca: chave 99 nao encontrada\n");

    printf("\nRemovendo a chave 25...\n");
    if (remover(tabela, 25))
        printf("Chave 25 removida com sucesso.\n");
    else
        printf("Chave 25 nao encontrada para remocao.\n");

    printf("\nTabela apos remocao:\n");
    imprimirTabela(tabela);

    liberarTabela(tabela);
    return 0;
}
