/* VETORES E MATRIZES EM C — 05: Strings */

#include <stdio.h>
#include <string.h>

int main() {
    printf("===== Strings em C =====\n\n");

    /* 1. Declaração e inicialização */
    printf("1. Declaração e inicialização:\n");
    
    char nome[20] = "Maria";
    char saudacao[] = "Olá, mundo!";
    
    printf("   nome: %s\n", nome);
    printf("   saudacao: %s\n\n", saudacao);

    /* 2. Tamanho da string */
    printf("2. Tamanho da string:\n");
    printf("   strlen(nome) = %zu\n", strlen(nome));
    printf("   strlen(saudacao) = %zu\n\n", strlen(saudacao));

    /* 3. Copiar strings */
    printf("3. Copiar strings:\n");
    char destino[20];
    strcpy(destino, nome);
    printf("   Copiado: %s\n\n", destino);

    /* 4. Concatenar strings */
    printf("4. Concatenar strings:\n");
    char frase[50] = "Olá, ";
    strcat(frase, nome);
    strcat(frase, "!");
    printf("   Resultado: %s\n\n", frase);

    /* 5. Comparar strings */
    printf("5. Comparar strings:\n");
    char s1[] = "abc";
    char s2[] = "abc";
    char s3[] = "xyz";
    
    printf("   strcmp(\"%s\", \"%s\") = %d (iguais)\n", s1, s2, strcmp(s1, s2));
    printf("   strcmp(\"%s\", \"%s\") = %d (diferentes)\n\n", s1, s3, strcmp(s1, s3));

    /* 6. Percorrer caracteres */
    printf("6. Percorrer caracteres:\n");
    char texto[] = "Exemplo";
    printf("   Texto: %s\n", texto);
    printf("   Caracteres: ");
    
    for (int i = 0; texto[i] != '\0'; i++) {
        printf("%c ", texto[i]);
    }
    printf("\n\n");

    /* 7. Contar vogais */
    printf("7. Contar vogais:\n");
    char palavra[] = "programacao";
    int vogais = 0;
    
    for (int i = 0; palavra[i] != '\0'; i++) {
        char c = palavra[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vogais++;
        }
    }
    
    printf("   Palavra: %s\n", palavra);
    printf("   Vogais: %d\n", vogais);

    return 0;
}
