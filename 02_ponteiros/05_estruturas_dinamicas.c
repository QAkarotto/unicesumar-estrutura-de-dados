/* PONTEIROS EM C — 05: Vetores e Matrizes Dinâmicas */

#include <stdio.h>
#include <stdlib.h>

void exibir_vetor(int *v, int n) {
    printf("   [");
    for (int i = 0; i < n; i++) {
        printf("%d%s", v[i], i < n-1 ? ", " : "");
    }
    printf("]\n");
}

void exibir_matriz(int *m, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        printf("   ");
        for (int j = 0; j < colunas; j++) {
            printf("%3d ", *(m + i*colunas + j));
        }
        printf("\n");
    }
}

int main() {
    printf("===== Vetores e Matrizes Dinâmicas =====\n\n");

    /* 1. VETOR DINÂMICO */
    printf("1. Vetor Dinâmico\n");
    int n = 6;
    int *vetor = (int*)malloc(n * sizeof(int));
    
    if (vetor == NULL) {
        printf("   Erro ao alocar memória!\n");
        return 1;
    }
    
    for (int i = 0; i < n; i++) {
        vetor[i] = (i+1) * 10;
    }
    
    printf("   Vetor alocado com %d elementos:\n", n);
    exibir_vetor(vetor, n);
    printf("\n");

    /* 2. MATRIZ DINÂMICA (como array linear) */
    printf("2. Matriz Dinâmica (método linear)\n");
    int linhas = 3, colunas = 4;
    int *matriz = (int*)malloc(linhas * colunas * sizeof(int));
    
    if (matriz == NULL) {
        free(vetor);
        printf("   Erro ao alocar matriz!\n");
        return 1;
    }
    
    // Preencher matriz
    int valor = 1;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            *(matriz + i*colunas + j) = valor++;
        }
    }
    
    printf("   Matriz %dx%d alocada:\n", linhas, colunas);
    exibir_matriz(matriz, linhas, colunas);
    printf("\n");

    /* 3. MATRIZ COM PONTEIRO DE PONTEIROS (mais flexível) */
    printf("3. Matriz com ponteiro de ponteiros\n");
    int **matriz2 = (int**)malloc(linhas * sizeof(int*));
    for (int i = 0; i < linhas; i++) {
        matriz2[i] = (int*)malloc(colunas * sizeof(int));
    }
    
    // Preencher
    valor = 100;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matriz2[i][j] = valor++;
        }
    }
    
    printf("   Matriz %dx%d com acesso [i][j]:\n", linhas, colunas);
    for (int i = 0; i < linhas; i++) {
        printf("   ");
        for (int j = 0; j < colunas; j++) {
            printf("%3d ", matriz2[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    /* 4. LIBERAÇÃO DE MEMÓRIA */
    printf("4. Liberando memória\n");
    
    free(vetor);
    printf("   ✓ Vetor liberado\n");
    
    free(matriz);
    printf("   ✓ Matriz linear liberada\n");
    
    for (int i = 0; i < linhas; i++) {
        free(matriz2[i]);  // Libera cada linha
    }
    free(matriz2);  // Libera o array de ponteiros
    printf("   ✓ Matriz de ponteiros liberada\n\n");

    printf("RESUMO:\n");
    printf("• Vetor dinâmico: int *v = malloc(n * sizeof(int))\n");
    printf("• Matriz linear: int *m = malloc(linhas*colunas * sizeof(int))\n");
    printf("• Matriz ptr**: alocar array de ponteiros + cada linha\n");
    printf("• SEMPRE liberar na ordem inversa da alocação!\n");

    return 0;
}

/* 
EXERCÍCIOS:
1. Criar função que aloca matriz e preenche com zeros
2. Criar função que copia um vetor dinâmico para outro
3. Liberar corretamente matriz de ponteiros sem memory leak
*/
