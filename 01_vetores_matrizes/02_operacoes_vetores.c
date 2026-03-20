/* VETORES E MATRIZES EM C — 02: Operações com Vetores */

#include <stdio.h>

int main() {
    printf("===== Operações com Vetores =====\n\n");

    int numeros[] = {15, 8, 23, 42, 4, 16, 30, 11};
    int tamanho = 8;

    /* 1. Soma de todos os elementos */
    printf("1. Soma dos elementos:\n");
    printf("   Vetor: [15, 8, 23, 42, 4, 16, 30, 11]\n");
    
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += numeros[i];
    }
    printf("   Soma: %d\n\n", soma);

    /* 2. Média dos elementos */
    printf("2. Média dos elementos:\n");
    float media = (float)soma / tamanho;
    printf("   Média: %.2f\n\n", media);

    /* 3. Encontrar o maior elemento */
    printf("3. Maior elemento:\n");
    int maior = numeros[0];
    for (int i = 1; i < tamanho; i++) {
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
    }
    printf("   Maior: %d\n\n", maior);

    /* 4. Encontrar o menor elemento */
    printf("4. Menor elemento:\n");
    int menor = numeros[0];
    for (int i = 1; i < tamanho; i++) {
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }
    printf("   Menor: %d\n\n", menor);

    /* 5. Buscar um elemento */
    printf("5. Buscar elemento (23):\n");
    int busca = 23;
    int encontrado = -1;
    
    for (int i = 0; i < tamanho; i++) {
        if (numeros[i] == busca) {
            encontrado = i;
            break;
        }
    }
    
    if (encontrado != -1) {
        printf("   Encontrado na posição %d\n", encontrado);
    } else {
        printf("   Não encontrado\n");
    }

    return 0;
}
