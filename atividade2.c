/* Escreva um programa que leia o nome de uma pessoa e imprima a seguinte mensagem, na tela: “Bem-vindo(a) à disciplina de Algoritmos e Lógica de Programação II, <nome>”; onde o campo <nome> deve ser substituído pelo nome informado pelo usuário. */

#include <stdio.h>

int main() {
    char nome[30];

    printf("Digite seu nome: \n");
    fgets(nome, sizeof(nome), stdin); // Lê a linha inteira, incluindo espaços

    // Remove o caractere de nova linha, se presente
    nome[strcspn(nome, "\n")] = '\0';

    printf("Bem-vindo(a) a disciplina de Algoritmos e Logica de Programacao II, %s\n", nome);
    return 0;
}

/* Explicação da Atividade

1- Uso de fgets:
    fgets(nome, sizeof(nome), stdin); lê a linha inteira, incluindo espaços, até o limite do tamanho do buffer ou até encontrar um caractere de nova linha.

2- Remoção do Caractere de Nova Linha:
    nome[strcspn(nome, "\n")] = '\0'; substitui o caractere de nova linha (\n) por um terminador de string (\0), que é útil para evitar que o nome termine com uma nova linha.
*/