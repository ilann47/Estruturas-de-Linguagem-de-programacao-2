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

// no caso aqui vai ser o programa a -------------------------------------------------------
/*
Considerando a  lissta

1 Janeiro - 31 dias
2 Fevereiro - 28 dias (ou 29 dias em anos bissextos)
3 Março - 31 dias
4 Abril - 30 dias
5 Maio - 31 dias
6 Junho - 30 dias
7 Julho - 31 dias
8 Agosto - 31 dias
9 Setembro - 30 dias
10 Outubro - 31 dias
11 Novembro - 30 dias
12 Dezembro - 31 dias

*/
#include <stdio.h>
int quantidadeDias(int mes, int ano)
{
    switch (mes)
    {
    case 1:
        printf("O mes tem 31 dias");
        break;
    case 2:
        if (ano % 4 == 0)
            printf("O mes tem 29 dias");
        else
            printf("O mes tem 28 dias");
        break;

    case 3:
        printf("O mes tem 31 dias");
        break;

    case 4:
        printf("O mes tem 30 dias");
        break;

    case 5:
        printf("O mes tem 31 dias");
        break;

    case 6:
        printf("O mes tem 30 dias");
        break;

    case 7:
        printf("O mes tem 31 dias");
        break;

    case 8:
        printf("O mes tem 31 dias");
        break;

    case 9:
        printf("O mes tem 30 dias");
        break;

    case 10:
        printf("O mes tem 31 dias");
        break;

    case 11:
        printf("O mes tem 30 dias");
        break;

    case 12:
        printf("O mes tem 31 dias");
        break;

    default:
        break;
    }
}
void main()
{
    int mes, ano;
    scanf("%d", &mes);
    scanf("%d", &ano);
    quantidadeDias(mes, ano);
}