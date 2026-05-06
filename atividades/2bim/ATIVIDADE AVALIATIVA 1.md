# Atividade Avaliativa 1 - Recursividade em C

## Exercicios

1. Faca um programa que implemente a sequencia de Fibonacci de forma recursiva sem otimização. O programa deve receber um valor `n`, calcular o termo correspondente, e exibir tambem a quantidade total de chamadas recursivas realizadas para evidenciar a ineficiencia do metodo.

2. Refaça o problema anterior usando memoizacao com alocacao dinamica. O programa deve preservar a solucao recursiva, armazenar resultados ja calculados e comparar a quantidade de chamadas da versao otimizada com a versao ingênua para o mesmo `n`.

3. Faca um programa que resolva o problema das Torres de Hanoi de forma recursiva. O programa deve receber a quantidade de discos, listar os movimentos executados e informar o numero total de movimentos gerados pela solucao.

## Orientações para desenvolvimento

- As duas primeiras questoes devem mostrar claramente a diferenca entre a abordagem ingenua e a abordagem otimizada.
- Em cada solucao, o aluno deve explicar em um comentario curto qual e o caso base e o que reduz o problema a cada chamada.
- Quando houver estruturas auxiliares, a solucao continua sendo recursiva se a decisao principal for tomada pela funcao recursiva.

## Restricoes da atividade

- Todas as solucoes devem usar funcoes recursivas no nucleo da resolucao.
- Nao utilizar variaveis globais.
- Nao utilizar bibliotecas prontas para resolver diretamente os exercicios.
- O caso base deve estar claro no codigo de cada exercicio.
- A versao memoizada da Fibonacci deve usar memoria alocada dinamicamente para o cache.
- Na geracao de permutacoes, o aluno deve usar tecnica de backtracking para explorar todas as solucoes.

## Entrega

- Entrega via GitHub contendo codigo e documentacao em README explicando a solucao.
- Entregas em grupo de ate 6 participantes.
- Cada integrante deve ter pelo menos um commit relevante relacionado a atividade no repositorio.
- Apresentacao e explicacao do codigo rodando na ultima aula pratica antes da prova teorica.
- A data de entrega e apresentacao sera informada pelo professor em sala.
- Enviar o link do repositorio por e-mail para joao.vsantos@unicesumar.edu.br com:
  - Titulo: Trabalho Estruturas de dados ADSIS3S.
  - Corpo: nome completo, usuario do GitHub de cada integrante da equipe e link do repositorio.
  - Em copia: gabriel.pjesus@unicesumar.edu.br (apenas para a turma de Engenharia de Software) e o e-mail de todos os integrantes da equipe.
