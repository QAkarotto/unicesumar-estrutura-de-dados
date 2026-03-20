/* VETORES E MATRIZES EM C — 04: Operações com Matrizes */

#include <stdio.h>

void imprimir_matriz(int m[3][3]) {
    for (int i = 0; i < 3; i++) {
        printf("   ");
        for (int j = 0; j < 3; j++) {
            printf("%4d", m[i][j]);
        }
        printf("\n");
    }
}

int main() {
    printf("===== Operações com Matrizes =====\n\n");

    /* 1. Soma de matrizes */
    printf("1. Soma de matrizes (C = A + B):\n");
    
    int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int B[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int C[3][3];
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    
    printf("   Matriz A:\n");
    imprimir_matriz(A);
    printf("   Matriz B:\n");
    imprimir_matriz(B);
    printf("   A + B:\n");
    imprimir_matriz(C);
    printf("\n");

    /* 2. Multiplicação por escalar */
    printf("2. Multiplicação por escalar (B = 3 * A):\n");
    
    int escalar = 3;
    int D[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int E[3][3];
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            E[i][j] = escalar * D[i][j];
        }
    }
    
    printf("   Matriz D:\n");
    imprimir_matriz(D);
    printf("   3 * D:\n");
    imprimir_matriz(E);
    printf("\n");

    /* 3. Transposição */
    printf("3. Transposição (linhas viram colunas):\n");
    
    int F[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int T[3][3];
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            T[j][i] = F[i][j];
        }
    }
    
    printf("   Matriz F:\n");
    imprimir_matriz(F);
    printf("   Transposta de F:\n");
    imprimir_matriz(T);

    return 0;
}
