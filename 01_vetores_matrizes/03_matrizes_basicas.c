/* VETORES E MATRIZES EM C — 03: Matrizes Básicas */

#include <stdio.h>

int main() {
    printf("===== Matrizes Básicas =====\n\n");

    /* 1. Declaração e inicialização */
    printf("1. Declaração e inicialização:\n");
    
    int matriz[3][4] = {
        {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9, 10, 11, 12}
    };
    
    printf("   Matriz 3x4:\n");
    for (int i = 0; i < 3; i++) {
        printf("   ");
        for (int j = 0; j < 4; j++) {
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    /* 2. Acesso a elementos */
    printf("2. Acesso a elementos:\n");
    printf("   matriz[0][0] = %d (canto superior esquerdo)\n", matriz[0][0]);
    printf("   matriz[1][2] = %d (linha 1, coluna 2)\n", matriz[1][2]);
    printf("   matriz[2][3] = %d (canto inferior direito)\n\n", matriz[2][3]);

    /* 3. Modificando elementos */
    printf("3. Modificando elementos:\n");
    matriz[1][1] = 99;
    printf("   Após matriz[1][1] = 99:\n");
    for (int i = 0; i < 3; i++) {
        printf("   ");
        for (int j = 0; j < 4; j++) {
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    /* 4. Matriz identidade */
    printf("4. Matriz identidade 3x3:\n");
    int identidade[3][3] = {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1}
    };
    
    for (int i = 0; i < 3; i++) {
        printf("   ");
        for (int j = 0; j < 3; j++) {
            printf("%4d", identidade[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    /* 5. Percorrendo por linha */
    printf("5. Percorrendo por linha:\n");
    for (int i = 0; i < 3; i++) {
        printf("   Linha %d: ", i);
        for (int j = 0; j < 4; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
