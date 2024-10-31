#include <stdio.h>

int main() {
    char nome[30];

    printf("Digite seu nome: \n");
    fgets(nome, sizeof(nome), stdin);
    
    nome[strcspn(nome, "\n")] = '\0';

    printf("Bem-vindo(a) a disciplina de Algoritmos e Logica de Programacao II, %s\n", nome);
    return 0;
}
