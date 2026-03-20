/* PONTEIROS EM C — 01: Ponteiros e Passagem de Parâmetros */

#include <stdio.h>

// Passagem POR VALOR: recebe uma cópia
void tentar_dobrar_valor(int n) {
    n = n * 2;
    printf("   Dentro da função: %d\n", n);
}

// Passagem POR REFERÊNCIA: recebe o endereço
void dobrar_referencia(int *p) {
    *p = *p * 2;
}

// Troca valores usando ponteiros
void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    printf("===== Ponteiros e Passagem de Parâmetros =====\n\n");

    /* 1. Conceito básico de ponteiro */
    printf("1. Conceito básico:\n");
    int numero = 42;
    int *p = &numero;  // p guarda o ENDEREÇO de numero
    
    printf("   numero = %d\n", numero);
    printf("   *p = %d (acesso via ponteiro)\n", *p);
    
    *p = 100;  // Modifica numero através do ponteiro
    printf("   Após *p = 100: numero = %d\n\n", numero);

    /* 2. Passagem por VALOR (não funciona) */
    printf("2. Passagem por VALOR:\n");
    int x = 5;
    printf("   Antes: x = %d\n", x);
    tentar_dobrar_valor(x);
    printf("   Depois: x = %d (não mudou!)\n\n", x);

    /* 3. Passagem por REFERÊNCIA (funciona) */
    printf("3. Passagem por REFERÊNCIA:\n");
    printf("   Antes: x = %d\n", x);
    dobrar_referencia(&x);  // Passa o endereço
    printf("   Depois: x = %d (mudou!)\n\n", x);

    /* 4. Aplicação prática: trocar valores */
    printf("4. Trocar valores:\n");
    int a = 10, b = 20;
    printf("   Antes: a = %d, b = %d\n", a, b);
    trocar(&a, &b);
    printf("   Depois: a = %d, b = %d\n", a, b);

    return 0;
}
