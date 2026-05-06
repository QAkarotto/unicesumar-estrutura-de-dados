# Atividade Avaliativa 3 (valor 1,0)

## Objetivo

Implementação de desafios com fila dinâmica, simulação de atendimento e priorização.

## Desafio 1

Implemente um programa em C que simule o atendimento de uma fila de clientes.

Cada cliente deve ser representado por uma struct contendo:

- id (int)
- tempoAtendimento (int, em minutos)

O programa deve:

- Ler um número n de clientes.
- Inserir os clientes em uma fila (ordem de chegada).
- Simular o atendimento sequencial, exibindo:
- id do cliente atendido.
- tempo de espera até ser atendido.

Regras:

- O tempo de espera de um cliente é a soma dos tempos de atendimento de todos os clientes à sua frente.

Para isso:

- Implemente uma fila utilizando struct e ponteiros.
- Crie operações de enqueue e dequeue.

## Restrições

- Não utilizar vetores para simular a fila.
- Não utilizar bibliotecas prontas.
- Toda a estrutura deve ser dinâmica (malloc/free).

## Desafio 2

Implemente um sistema de fila de impressão onde cada documento possui:

- id (int)
- número de páginas (int)
- prioridade (int, quanto menor o valor, maior a prioridade)

O programa deve:

- Inserir documentos na fila.
- Sempre atender primeiro o documento de maior prioridade.
- Em caso de empate, respeitar a ordem de chegada.

### Requisitos

- Implementar a fila manualmente.
- Garantir a ordenação por prioridade no momento da inserção ou remoção.

### Restrições

- Não utilizar estruturas prontas.
- Não ordenar usando funções externas (ex: qsort).

## Entrega

- Entrega via GitHub contendo código e documentação em README explicando a solução.
- Entregas em grupo de até 5 participantes.
- Cada integrante deve ter pelo menos um commit relevante relacionado à atividade no repositório.
- Apresentação e explicação do código rodando na última aula prática antes da prova teórica.
- Data da apresentação/entrega:
	- **Análise e Desenvolvimento de Sistemas:** **08/04**.
	- **Engenharia de Software:** **10/04**.
- Enviar o link do repositório por e-mail para joao.vsantos@unicesumar.edu.br com:
	- Título: Trabalho Estruturas de dados ADSIS3S.
	- Corpo: nome completo, usuário do GitHub de cada integrante da equipe e link do repositório.
	- Em cópia: gabriel.pjesus@unicesumar.edu.br e o e-mail de todos os integrantes da equipe.
- O envio por e-mail deve ocorrer até as 19h da data da apresentação.
