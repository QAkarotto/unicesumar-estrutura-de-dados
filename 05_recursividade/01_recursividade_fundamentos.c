/* RECURSIVIDADE EM C - 01: Fundamentos */

#include <stdio.h>

long long fatorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }

    return (long long)n * fatorial(n - 1);
}

long long potencia(int base, int expoente)
{
    if (expoente == 0)
    {
        return 1;
    }

    return (long long)base * potencia(base, expoente - 1);
}

int main(void)
{
    int valor_fatorial = 5;
    int base = 2;
    int expoente = 8;

    printf("===== Fundamentos de Recursividade =====\n\n");

    printf("fatorial(%d) = %lld\n", valor_fatorial, fatorial(valor_fatorial));
    printf("potencia(%d, %d) = %lld\n", base, expoente, potencia(base, expoente));

    return 0;
}