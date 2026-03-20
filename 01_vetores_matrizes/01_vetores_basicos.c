/* VETORES E MATRIZES EM C — 01: Vetores Básicos */

#include <stdio.h>

int main() {
    printf("===== Vetores Básicos =====\n\n");

    /* 1. Declaração e inicialização */
    printf("1. Declaração e inicialização:\n");
    int numeros[5];  // Declaração (valores não inicializados)
    int pares[5] = {2, 4, 6, 8, 10};  // Inicialização completa
    int impares[] = {1, 3, 5, 7, 9};  // Tamanho automático (5)
    
    printf("   Vetor pares: [2, 4, 6, 8, 10]\n");
    printf("   Vetor impares: [1, 3, 5, 7, 9]\n\n");

    /* 2. Acesso aos elementos */
    printf("2. Acesso aos elementos:\n");
    printf("   pares[0] = %d (primeiro elemento)\n", pares[0]);
    
    printf("   pares[2] = %d (terceiro elemento)\n", pares[2]);
    printf("   pares[4] = %d (último elemento)\n\n", pares[4]);

    /* 3. Modificando elementos */
    printf("3. Modificando elementos:\n");
    numeros[0] = 100;
    numeros[1] = 200;
    numeros[2] = 300;
    numeros[3] = 400;
    numeros[4] = 500;
    
    printf("   numeros = [");
    for (int i = 0; i < 5; i++) {
        printf("%d%s", numeros[i], i < 4 ? ", " : "");
    }
    printf("]\n\n");

    /* 4. Percorrendo com loop */
    printf("4. Percorrendo com loop:\n");
    printf("   Elementos do vetor impares:\n");
    for (int i = 0; i < 5; i++) {
        printf("   impares[%d] = %d\n", i, impares[i]);
    }
    printf("\n");

    /* 5. Inicialização com zero */
    printf("5. Inicialização com zero:\n");
    int zeros[5] = {0};  // Todos os elementos = 0
    printf("   zeros = [");
    for (int i = 0; i < 5; i++) {
        printf("%d%s", zeros[i], i < 4 ? ", " : "");
    }
    printf("]\n");

    return 0;
}
