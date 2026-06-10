# Atividade Avaliativa 4 – Estruturas Avançadas de Árvores

Após estudar Árvores Binárias de Busca (BST), diversas variações foram desenvolvidas para resolver problemas relacionados a balanceamento, desempenho e organização hierárquica dos dados.

## Objetivo

Pesquisar estruturas avançadas de árvores e operações de balanceamento, relacionando os conceitos estudados em sala com aplicações reais da computação.

## Entrega

Cada grupo deverá criar um arquivo `trabalho-arvores.md` em seu repositório GitHub e registrar nele todo o conteúdo solicitado nesta atividade.

O arquivo deverá estar organizado utilizando Markdown (`.md`), com títulos, subtítulos, exemplos e imagens quando necessário.

---

## Parte 1 – Tipos de Árvores

Pesquise e apresente os seguintes tópicos:

### AVL

- Conceito
- Características
- Vantagens
- Desvantagens
- Exemplo ilustrado

### Rubro-Negra

- Conceito
- Regras de coloração
- Vantagens
- Desvantagens
- Exemplo ilustrado

### N-ária

- Conceito
- Diferenças em relação às árvores binárias
- Vantagens
- Desvantagens
- Exemplo ilustrado
- Aplicações práticas

---

## Parte 2 – Operações em Árvores

Pesquise e explique as seguintes operações:

### Rotação Simples à Direita

- Objetivo
- Situação em que é utilizada
- Exemplo antes e depois da rotação

### Rotação Simples à Esquerda

- Objetivo
- Situação em que é utilizada
- Exemplo antes e depois da rotação

### Rotação Dupla

- Esquerda-Direita (LR)
- Direita-Esquerda (RL)
- Exemplos ilustrados

### Inversão (Espelhamento)

- Conceito
- Aplicação
- Exemplo antes e depois da operação

---

## Parte 3 – Aplicação Prática

Escolha uma aplicação real da computação e explique qual das estruturas estudadas seria mais adequada.

Exemplos:

- Sistema de arquivos
- Banco de dados
- Sistema de busca
- Redes sociais
- Jogos
- Outro sistema computacional

A justificativa deve considerar desempenho, organização dos dados e operações realizadas pelo sistema.

---

## Parte 4 – Comparação entre Estruturas

Preencha a tabela abaixo e explique as informações apresentadas.

| Estrutura | Nº Máximo de Filhos | Balanceamento | Complexidade de Busca | Complexidade de Inserção | Vantagem Principal | Desvantagem Principal | Exemplo de Aplicação |
| --- | --- | --- | --- | --- | --- | --- | --- |
| BST | 2 | Não possui balanceamento automático. Pode ficar desbalanceada conforme a ordem de inserção. | O(log n) no melhor caso e O(n) no pior caso | O(log n) no melhor caso e O(n) no pior caso | Estrutura simples de entender e implementar | Pode perder desempenho se ficar desbalanceada | Árvores de busca básicas |
| AVL | 2 | Sim. Mantém o fator de balanceamento com rotações | O(log n) | O(log n) | Busca previsível e eficiente | Inserção e remoção são mais custosas por causa das rotações | Índices e estruturas que exigem leitura frequente |
| Rubro-Negra | 2 | Sim. Usa coloração e rotações para manter o balanceamento aproximado | O(log n) | O(log n) | Balanceamento eficiente com menos rotações que a AVL | Implementação mais complexa | Bibliotecas e estruturas internas de sistemas |
| N-ária | N (vários filhos) | Pode ou não possuir mecanismos de balanceamento, dependendo da variação | O(log n) em estruturas balanceadas, mas depende da aplicação | O(log n) ou proporcional à estrutura da árvore | Representa melhor hierarquias com muitos filhos | Não é tão simples quanto a árvore binária em alguns contextos | Sistema de arquivos, menus e taxonomias |

### O que preencher em cada coluna

**Nº Máximo de Filhos**

- Quantidade máxima de filhos que um nó pode possuir.

**Balanceamento**

- Informar se a árvore possui mecanismos de balanceamento automático e como esse balanceamento ocorre.

**Complexidade de Busca**

- Informar a complexidade assintótica da operação de busca (Big-O).

**Complexidade de Inserção**

- Informar a complexidade assintótica da operação de inserção (Big-O).

**Vantagem Principal**

- Principal benefício da estrutura.

**Desvantagem Principal**

- Principal limitação da estrutura.

**Exemplo de Aplicação**

- Exemplo real de utilização da estrutura.

---

## Instruções de Entrega Atualizadas

- A atividade deve ser entregue via GitHub em um arquivo `.md`, com o nome `trabalho-arvores.md`.
- Não será necessária apresentação em sala nem envio de vídeo.
- O arquivo deve conter respostas completas, bem organizadas e escritas com linguagem técnica adequada.
- Sempre que possível, use exemplos, tabelas, listas e figuras para facilitar a leitura.
- Cada integrante do grupo deve contribuir com commits relevantes no repositório.
- A entrega deve ser realizada até as 19h da data combinada com a turma.
- Enviar o link do repositório por e-mail para joao.vsantos@unicesumar.edu.br com:
  - Título: Trabalho Estruturas de Dados 2BIM SUA_TURMA_AQUI [ADSIS3S, ESOFT3SNA ou ESOFT3SNB].
  - Corpo: nome completo, usuário do GitHub de cada integrante da equipe e link do repositório.
  - Em cópia: e-mail de todos os integrantes da equipe.
