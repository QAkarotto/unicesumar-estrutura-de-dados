/* RECURSIVIDADE EM C - 01: Fundamentos */

#include <stdio.h>

int fatorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }

    return n * fatorial(n - 1);
}

int potencia(int base, int expoente)
{
    if (expoente == 0)
    {
        return 1;
    }

    return base * potencia(base, expoente - 1);
}

int main(void)
{
    int valor_fatorial = 5;
    int base = 2;
    int expoente = 8;

    printf("===== Fundamentos de Recursividade =====\n\n");

    printf("fatorial(%d) = %d\n", valor_fatorial, fatorial(valor_fatorial));
    printf("potencia(%d, %d) = %d\n", base, expoente, potencia(base, expoente));

    return 0;
}