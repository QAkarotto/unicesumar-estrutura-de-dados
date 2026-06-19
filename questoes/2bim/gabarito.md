# Gabarito - Lista de Exercícios - 2º Bimestre

Respostas da lista de exercícios de estudo para a prova da disciplina de Estrutura de Dados.

## Respostas

1. Ocorre um erro de estouro de pilha (Stack Overflow), pois as chamadas sucessivas preenchem de forma infinita a memória da Pilha de Execução do sistema.

2. O sistema utiliza a Pilha de Execução (Stack), onde cada chamada gera um registro de ativação.

3. As chamadas mais profundas começam a retornar os seus resultados parciais para as chamadas anteriores, combinando-os para construir a resposta final do problema.

4. Eles são isolados e espalhados na memória, sendo amarrados exclusivamente por meio de ponteiros.

5. A alocação dinâmica permite que as listas cresçam livremente conforme a demanda de dados, baseando-se na manipulação de ponteiros para viabilizar inserções.

6. Ele aponta para o endereço de memória do nó sucessor, estabelecendo o encadeamento lógico da lista.

7. O último nó da estrutura aponta de volta para o primeiro nó, eliminando o valor `NULL` como terminador da coleção.

8. A busca encerra quando o ponteiro "próximo" do nó que está sendo verificado for igual ao endereço do nó de partida (o início).

9. Ocorre um vazamento de memória (Memory Leak), acarretando na perda definitiva do acesso ao restante da lista.

10. Ela supera a limitação de navegação unidirecional, permitindo que a coleção seja percorrida e manipulada em ambas as direções.

11. Dois ponteiros simultâneos: um que aponta para o nó sucessor (próximo) e outro que aponta para o nó predecessor (anterior).

12. Porque a lista insere o dado por meio da simples atualização de ponteiros, enquanto o vetor exige o processamento do deslocamento de todos os elementos para abrir espaço na primeira posição.

13. Ela realiza um cálculo que mapeia a chave informada, transformando-a diretamente em um índice (posição) específico na estrutura.

14. A eficiência provém da qualidade do seu espalhamento de chaves.

15. Proporcionar o acesso eficiente aos dados, reduzindo drasticamente o tempo necessário para as operações de busca em comparação com as estruturas lineares.

16. A Tabela Hash aponta diretamente para a posição mapeada da chave através de sua função de dispersão, enquanto o vetor precisa verificar os seus elementos de forma sequencial um a um.

17. Ela acopla uma Lista Encadeada no índice do vetor onde houve a colisão e adiciona os elementos que colidiram como novos nós pendurados nessa lista.

18. A necessidade de superar os gargalos nas operações de busca e inserção apresentados pelas estruturas lineares.

19. É o elemento fundamental da hierarquia de uma árvore, o qual centraliza e dita o acesso principal a toda a estrutura.

20. São os nós localizados nas extremidades da árvore, os quais não possuem ramificações descendentes (filhos).

21. Corresponde a uma árvore menor, embutida dentro da árvore principal, formada a partir de um nó qualquer e todos os seus descendentes.

22. Representa a quantidade de ramificações (filhos diretos) que aquele determinado nó possui na estrutura.

23. Mede a profundidade máxima alcançada pela hierarquia da estrutura.

24. A Árvore Binária de Busca (BST) acrescenta uma regra de ordenação e organização dos elementos de forma posicional, o que permite buscas muito mais rápidas e eficientes.

25. Depende da distribuição e do equilíbrio dos nós na subárvore, os quais são diretamente influenciados pela ordem com que os elementos foram inseridos.

26. Raiz, Esquerda e Direita.

27. Esquerda, Direita e Raiz.

28. O Percurso em Nível.

29. Devido à sua propriedade, a árvore entrega os registros perfeitamente ordenados do menor para o maior.

30. Todos os nós seriam inseridos seguidamente como filhos à esquerda de seus predecessores, perdendo o balanceamento e formando uma estrutura semelhante a uma lista encadeada unidirecional.
