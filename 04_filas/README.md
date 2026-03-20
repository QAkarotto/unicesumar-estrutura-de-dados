# Filas em C

Módulo com implementação didática de fila dinâmica em C.

## Arquivos de Exemplo

| Arquivo | Finalidade |
|---------|------------|
| [01_fila_fundamentos.c](01_fila_fundamentos.c) | Implementação completa de fila com alocação dinâmica e demonstração no `main` |

## Conceitos Cobertos

- Estrutura encadeada com nó `Elemento`
- Operações básicas: `enqueue`, `dequeue`, `front`, `size`, `empty`
- Controle de `inicio` e `fim` para comportamento FIFO
- Gerenciamento de memória com `malloc` e `free`

## Compilação e Execução

```bash
gcc -Wall -Wextra -std=c11 01_fila_fundamentos.c -o fila
```

```bash
./fila
```
