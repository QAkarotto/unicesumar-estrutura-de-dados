/* PONTEIROS EM C — 02: Aritmética de Ponteiros com Vetores */

#include <stdio.h>

int main() {
    printf("===== Aritmética de Ponteiros com Vetores =====\n\n");

    int vetor[] = {10, 20, 30, 40, 50};
    int *ptr = vetor;  // Nome do vetor é o endereço do primeiro elemento

    /* 1. Três formas de acessar elementos */
    printf("1. Acesso aos elementos:\n");
    printf("   vetor[2] = %d\n", vetor[2]);
    printf("   *(ptr+2) = %d\n", *(ptr+2));
    printf("   *(vetor+2) = %d\n\n", *(vetor+2));

    /* 2. Percorrendo com aritmética */
    printf("2. Percorrendo com ptr++:\n");
    ptr = vetor;  // Volta para o início
    for (int i = 0; i < 5; i++) {
        printf("   *ptr = %d\n", *ptr);
        ptr++;  // Avança para o próximo elemento
    }
    printf("\n");

    /* 3. Acesso com *(ptr + i) */
    printf("3. Acesso com *(ptr + i):\n");
    ptr = vetor;
    for (int i = 0; i < 5; i++) {
        printf("   *(ptr+%d) = %d\n", i, *(ptr + i));
    }
    printf("\n");

    /* 4. Diferença entre ponteiros */
    printf("4. Diferença entre ponteiros:\n");
    int *inicio = vetor;
    int *fim = &vetor[4];
    printf("   fim - inicio = %td elementos\n", fim - inicio);

    return 0;
}
