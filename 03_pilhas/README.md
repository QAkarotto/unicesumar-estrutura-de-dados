# Pilhas em C

Módulo com implementação didática de pilha dinâmica em C.

## Arquivos de Exemplo

| Arquivo | Finalidade |
|---------|------------|
| [01_pilha_fundamentos.c](01_pilha_fundamentos.c) | Implementação completa de pilha com alocação dinâmica e demonstração no main |

## Conceitos Cobertos

- Estrutura encadeada com nó `Elemento`
- Operações básicas: `push`, `pop`, `top`, `size`, `empty`
- Gerenciamento de memória com `malloc` e `free`

## Compilação e Execução

```bash
gcc -Wall -Wextra -std=c11 01_pilha_fundamentos.c -o pilha
```

```bash
./pilha
```
