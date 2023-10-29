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

// Aqui sendo a letra c

/*
c) Faça um subprograma que calcule quantos dias já se passaram desde 01/01/1901 até uma

data qualquer, maior que a data base, passada como parâmetro.
*/

int quantidadeDias(int mes, int ano)
{
    int mestem;
    switch (mes)
    {
    case 1:
        mestem = 31;
        printf("O mes tem 31 dias");
        break;
    case 2:
        if (ano % 4 == 0)
            mestem = 29;
        printf("O mes tem 29 dias");
        else mestem = 28;
        printf("O mes tem 28 dias");
        break;

    case 3:
        mestem = 31;
        printf("O mes tem 31 dias");
        break;

    case 4:
        mestem = 30;
        printf("O mes tem 30 dias");
        break;

    case 5:
        mestem = 31;
        printf("O mes tem 31 dias");
        break;

    case 6:
        mestem = 30;
        printf("O mes tem 30 dias");
        break;

    case 7:
        mestem = 31;
        printf("O mes tem 31 dias");
        break;

    case 8:
        mestem = 31;
        printf("O mes tem 31 dias");
        break;

    case 9:
        mestem = 30;
        printf("O mes tem 30 dias");
        break;

    case 10:
        mestem = 31;
        printf("O mes tem 31 dias");
        break;

    case 11:
        mestem = 30;
        printf("O mes tem 30 dias");
        break;

    case 12:
        mestem = 31;
        printf("O mes tem 31 dias");
        break;

    default:
        break;
    }
    return mestem;
}
int calcularData(int dia, int mes, int ano)
{
    int matriz[ano][12][31] if (ano < 1901)
    {
        print("A data e inferior a data base; -> 1901");
        break;
    }
    if (ano % 4 == 0)

        for (i = 1901; i < ano; i++)
        {
            for (j = 1; j < mes; j++)
            {
                for (k = 1; k < dia; k++)
                {
                }
            }
        }
}