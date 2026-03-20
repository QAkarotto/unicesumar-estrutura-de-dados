/* PONTEIROS EM C — 03: Aritmética com Matrizes */

#include <stdio.h>

void exibir_matriz(int *m, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            // Acesso: *(ptr + linha*num_colunas + coluna)
            printf("%3d ", *(m + i*colunas + j));
        }
        printf("\n");
    }
}

int soma_diagonal(int *m, int n) {
    int soma = 0;
    for (int i = 0; i < n; i++) {
        soma += *(m + i*n + i);  // Diagonal principal: [0][0], [1][1], [2][2]...
    }
    return soma;
}

int main() {
    printf("===== Aritmética com Matrizes =====\n\n");

    /* Matriz 3x3 na memória */
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Matriz original:\n");
    exibir_matriz((int*)matriz, 3, 3);

    /* Como funciona o acesso? */
    printf("\n--- Acessando elemento [1][2] (valor 6) ---\n");
    int *ptr = (int*)matriz;
    printf("Linha 1, Coluna 2\n");
    printf("Posição na memória: 1*3 + 2 = 5\n");
    printf("Valor: *(ptr + 5) = %d\n", *(ptr + 5));

    /* Soma da diagonal */
    printf("\n--- Soma da diagonal principal ---\n");
    printf("Elementos: 1 + 5 + 9 = %d\n", soma_diagonal((int*)matriz, 3));

    /* Navegação com ponteiros */
    printf("\n--- Todos elementos com ptr++ ---\n");
    ptr = (int*)matriz;
    for (int i = 0; i < 9; i++) {
        printf("%d ", *ptr);
        ptr++;
    }
    printf("\n");

    return 0;
}

/* 
EXERCÍCIOS:
1. Criar função que encontra o MAIOR elemento da matriz
2. Criar função que TRANSPÕE a matriz (trocar linhas por colunas)
3. Criar função que conta quantos elementos são PARES
*/
