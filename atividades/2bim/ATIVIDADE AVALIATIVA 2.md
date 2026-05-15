# 🧪 Atividade Avaliativa — Estruturas de Dados em C - Manipulação de Listas Encadeadas

### Atividades

Desenvolver um gerenciador simples de inteiros usando listas encadeadas. Por fim, implementar uma Playlist de músicas usando List Circular Duplamente Encadeada. Os exemplos de implementação básica de listas estão em: [06_listas_encadeadas/01_lista_encadeada.c](06_listas_encadeadas/01_lista_encadeada.c).

---

## ✅ Parte 1: Inserção em Posição Específica

Implemente: `void inserirPosicao(No **head, int valor, int posicao);`

- Posição inicia em 0
- Deve funcionar para: lista vazia, início, meio e fim
- Exibir erro se posição inválida

**Exemplo:** `10 -> 20 -> 30 -> NULL` → inserir 99 na posição 1 → `10 -> 99 -> 20 -> 30 -> NULL`

---

## ✅ Parte 2: Busca por Valor

Implemente: `int buscarValor(No *head, int valor);`

- Retorna posição da primeira ocorrência
- Retorna -1 se não encontrar
- Sem usar vetor

**Exemplo:** Buscar 20 em `10 -> 20 -> 30 -> NULL` retorna 1

---

## ✅ Parte 3: Inverter Lista

Implemente: `void inverterLista(No **head);`

- Sem vetor auxiliar, apenas ponteiros
- Sem criar nova lista

**Exemplo:** `10 -> 20 -> 30 -> NULL` → `30 -> 20 -> 10 -> NULL`

---

## ✅ Parte 4: Dividir Lista em Duas

Implemente: `void dividirLista(No *head, No **lista1, No **lista2);`

- Use técnica de ponteiro rápido/lento
- Não conte elementos previamente
- Se ímpar: primeira lista recebe elemento a mais

**Exemplo:** `10 -> 20 -> 30 -> 40 -> 50 -> NULL` divide em `10 -> 20 -> 30 -> NULL` e `40 -> 50 -> NULL`

---

## ✅ Parte 5: Playlist Circular Duplamente Encadeada

Implemente um playlist de música usando lista circular duplamente encadeada.

**Estrutura estendida:**
```c
typedef struct No {
    char musica[100];  // nome da música
    struct No *prox;
    struct No *ant;    // ponteiro anterior
} No;
```

**Funções obrigatórias:**
- `void adicionarMusica(No **head, char *nome);` — adiciona ao final (mantém circularidade)
- `void proximaMusica(No **atual);` — avança para a próxima
- `void musicaAnterior(No **atual);` — volta para a anterior
- `void exibirPlaylist(No *head);` — exibe todas as músicas
- `int totalMusicas(No *head);` — retorna quantidade

**Requisitos:**
- Último nó aponta para primeiro (e primeiro aponta para último via `ant`)
- Suporte navegação bidirecional
- Gerencie alocação/liberação de memória
- Controle de percurso: implemente mecanismo para detectar quando todas as músicas foram tocadas (evite loop infinito)

**Exemplo:**
```
Playlist: [Rock] <-> [Jazz] <-> [Pop] <->
           ^__________________________|
```
Navegar: Rock → Jazz → Pop → Rock (volta circular)

---

### Requisitos Obrigatórios

- Use apenas `stdio.h` e `stdlib.h`
- Sem vetores auxiliares
- Gerencie memória corretamente (malloc/free)
- Indentação correta, sem variáveis globais

---

## Entrega

- Entrega via GitHub contendo código e documentação em README explicando a solução.
- Entregas em grupo de até 6 participantes.
- Cada integrante deve ter pelo menos um commit relevante relacionado à atividade no repositório.
- Apresentação e explicação do código rodando na última aula prática antes da prova teórica.
- A data de entrega e apresentação será informada pelo professor em sala.
- Enviar o link do repositório por e-mail para joao.vsantos@unicesumar.edu.br com:
  - Título: Trabalho Estruturas de Dados 2BIM SUA_TURMA_AQUI [ADSIS3S, ESOFT3SNA ou ESOFT3SNB].
  - Corpo: nome completo, usuário do GitHub de cada integrante da equipe e link do repositório.
  - Em cópia: e-mail de todos os integrantes da equipe.
