/*
a) Criar um registro de pessoas chamado tpPessoa com os atributos Nome string[50], idade int, sexo char

b) criar um registro chamado Lista que tenha uma array do tipo  tpPessoa com ate 100 elementos e um campo tam do tipo int;

c) Fazer uma função que insira um registro do tipo tpPessoa na ultima posição da lista;

d) Fazer uma função com nome INSERIR() que receba dois parâmetros:
    a)  um registro do tipo tpPessoa
    b) uma variavel pos do tipo inteiro que indica a posição a ser inserida na Lista;
*/
#include <stdio.h>
#include <string.h>

// Definindo o registro tpPessoa
typedef struct
{
    char Nome[50];
    int idade;
    char sexo;
} tpPessoa;

// Definindo o registro Lista
typedef struct
{
    tpPessoa pessoas[100];
    int tam;
} Lista;

int ultimaPosicao()
{
}

main()
{
    // Inicializando as listas e contadores
    Lista lista;
    int i = 0;
    // Inicializando as variáveis e estruturas necessárias
    printf("Insira as informacoes das pessoas");
    printf("Quantas pessoas estao na Lista?");
    scanf("%d", &lista.tam);
    for (i = 0; i < lista.tam; i++)
    {
        printf("Pessoa %d", i + 1);
        printf("Nome: ");
        gets(lista.pessoas[i].Nome);
        printf("Idade: ");
        scanf("%d", &lista.pessoas[i].idade);
        printf("Sexo: ");
        gets(lista.pessoas[i].sexo);
    }
}