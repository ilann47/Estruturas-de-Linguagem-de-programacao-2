/*
a) Faça um subprograma que ao serem passados como parâmetros um ano e um mês, seja

retornado quantos dias existem naquele mês (cuidado com ano bissexto).

b) Faça um subprograma que ao ser passado como parâmetro um ano, seja retornado

quantos dias existem naquele ano.

c) Faça um subprograma que calcule quantos dias já se passaram desde 01/01/1901 até uma

data qualquer, maior que a data base, passada como parâmetro. (este é um problema

de compactação de data, o resultado é uma data compactada em relação a uma data

base.)

d) Faça um subprograma que ao serem passados como parâmetros duas datas quaisquer,

seja retornado a diferença, em dias, entre as duas datas.

e) Faça um subprograma que ao ser passado como parâmetro uma data compactada

em dias, a partir de 01/01/1901, seja retornado via parâmetro a data correspondente

no formato dia, mês e ano.
*/

// aqui no caso vai ser b
//      b) Faça um subprograma que ao ser passado como parâmetro um ano, seja retornado
//       quantos dias existem naquele ano.
#include <stdio.h>

int qntdDiaAno(int ano)
{
    if (ano % 4 == 0)
        printf("O ano tem 366 dias");
    else
        printf("O ano tem 365 dias");
}
void main()
{
    int abobora;
    printf("Qual ano? ");
    scanf("%d", &abobora);

    qntdDiaAno(abobora);
}