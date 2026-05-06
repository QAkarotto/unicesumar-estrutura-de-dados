# Recursividade em C

Módulo com exemplos didáticos de recursividade em C.

## Arquivos de Exemplo

| Arquivo | Finalidade |
|---------|------------|
| [01_recursividade_fundamentos.c](01_recursividade_fundamentos.c) | Exemplo de fatorial e potência com chamadas recursivas |
| [02_recursividade_mdc.c](02_recursividade_mdc.c) | Exemplo de MDC recursivo com algoritmo de Euclides |

## Conceitos Cobertos

- Caso base e passo recursivo
- Chamada de função com retorno em cadeia
- Fatorial recursivo
- MDC recursivo
- Redução progressiva de problema com chamada recursiva

## Compilação e Execução

```bash
gcc -Wall -Wextra -std=c11 01_recursividade_fundamentos.c -o recursividade1
```

```bash
gcc -Wall -Wextra -std=c11 02_recursividade_mdc.c -o recursividade2
```

```bash
./recursividade1
./recursividade2
```