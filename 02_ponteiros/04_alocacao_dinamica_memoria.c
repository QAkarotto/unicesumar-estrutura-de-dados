/* PONTEIROS EM C — 04: Alocação Dinâmica de Memória */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("===== Alocação Dinâmica de Memória =====\n\n");

    /* 1. malloc - Memory ALLOCation */
    printf("1. malloc() - aloca memória SEM inicializar\n");
    int *v1 = (int *)malloc(5 * sizeof(int));

    if (v1 == NULL)
    {
        printf("   Erro ao alocar memória!\n");
        return 1;
    }

    printf("   Memória alocada. Valores aleatórios (lixo):\n   ");
    for (int i = 0; i < 5; i++)
        printf("%d ", v1[i]);
    printf("\n\n");

    /* Inicializar manualmente */
    for (int i = 0; i < 5; i++)
        v1[i] = (i + 1) * 10;
    printf("   Após inicializar: ");
    for (int i = 0; i < 5; i++)
        printf("%d ", v1[i]);
    printf("\n\n");

    /* 2. calloc - Clear ALLOCation */
    printf("2. calloc() - aloca memória E inicializa com ZERO\n");
    int *v2 = (int *)calloc(5, sizeof(int));

    printf("   Valores iniciais (tudo zero):\n   ");
    for (int i = 0; i < 5; i++)
        printf("%d ", v2[i]);
    printf("\n\n");

    /* 3. realloc - RE-ALLOCation */
    printf("3. realloc() - redimensiona memória alocada\n");
    printf("   Vetor v1 atual (5 elementos): ");
    for (int i = 0; i < 5; i++)
        printf("%d ", v1[i]);

    v1 = (int *)realloc(v1, 8 * sizeof(int)); // Aumenta para 8

    printf("\n   Adicionando 3 novos elementos...\n");
    v1[5] = 60;
    v1[6] = 70;
    v1[7] = 80;

    printf("   Vetor expandido (8 elementos): ");
    for (int i = 0; i < 8; i++)
        printf("%d ", v1[i]);
    printf("\n\n");

    /* 4. free - liberar memória */
    printf("4. free() - SEMPRE libere a memória alocada!\n");
    free(v1);
    free(v2);
    printf("   Memória liberada com sucesso.\n\n");

    printf("IMPORTANTE:\n");
    printf("• malloc/calloc/realloc alocam na HEAP (memória dinâmica)\n");
    printf("• Sempre verificar se retorno != NULL\n");
    printf("• Sempre chamar free() ao terminar!\n");

    return 0;
}

/*
EXERCÍCIOS:
1. Criar função que aloca um vetor de N inteiros e preenche com valores de 1 a N
2. Criar função que duplica o tamanho de um vetor usando realloc
3. Identificar o erro: esquecer de liberar memória (memory leak)
*/
