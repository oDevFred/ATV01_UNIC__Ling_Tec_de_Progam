# Programa de Boas-Vindas

Este projeto foi desenvolvido como parte da disciplina de Linguagem e Técnicas de Programação no curso de Análise e Desenvolvimento de Sistemas da Faculdade UNICESUMAR. O objetivo deste código é solicitar o nome do usuário e exibir uma mensagem de boas-vindas personalizada.

## Funcionalidade do Programa

O código lê o nome do usuário e imprime uma mensagem de boas-vindas. Ele utiliza a função `fgets` para garantir que o nome pode incluir espaços e remove o caractere de nova linha que é gerado quando a entrada é lida.

### Estrutura do Código

1. **Declaração de Variáveis**
   - `char nome[30]`: Declara um array de caracteres para armazenar o nome do usuário.

2. **Entrada do Usuário**
   - Usa `printf` para solicitar que o usuário digite seu nome.
   - `fgets(nome, sizeof(nome), stdin)`: Lê a entrada do usuário, permitindo que nomes com espaços sejam capturados.

3. **Remoção do Caractere de Nova Linha**
   - `nome[strcspn(nome, "\n")] = '\0'`: Substitui o caractere de nova linha pelo caractere nulo, para que o nome impresso não contenha a nova linha.

4. **Saída do Resultado**
   - `printf` exibe uma mensagem de boas-vindas personalizada utilizando o nome fornecido pelo usuário.

## Exemplo de Uso

### Entrada
```plaintext
Digite seu nome: 
Caio
```

### Saída
```plaintext
Bem-vindo(a) a disciplina de Algoritmos e Logica de Programacao II, Caio
```

## Tecnologias e Conceitos Utilizados

- **C**: Linguagem de programação utilizada.
- **Entrada e Saída**: Utilização das funções `printf` e `fgets` para interação com o usuário.
- **Manipulação de Strings**: Remoção do caractere de nova linha usando `strcspn`.

## Autor

Caio Frederico, como parte da disciplina de Linguagem e Técnicas de Programação da Faculdade UNICESUMAR.
