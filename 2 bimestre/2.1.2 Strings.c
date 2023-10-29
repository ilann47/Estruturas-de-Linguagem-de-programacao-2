/*
Faça um subprograma em linguagem C que receba um valor numérico,
mas em forma de uma cadeia de caracteres, no formato americano
(somente com o ponto decimal separando a parte fracionária),
que seja capaz de adequar este número para o padrão nacional. Considere apenas duas casas decimais.

Padrão americano '1234.23', ou '1,234.23' (considere apenas uma entre estas duas formas do padrão americano).

Padrão nacional '1.234,23'
*/

#include <stdio.h>
#include <string.h>

void converterParaPadraoNacional(char numeroAmericano[])
{
    int i, j;
    char numeroNacional[20]; // Pode ajustar o tamanho conforme necessário

    // Inicializar a string de destino
    strcpy(numeroNacional, "");

    // Encontrar a posição do ponto decimal no número americano
    int posicaoPonto = -1;
    for (i = 0; i < strlen(numeroAmericano); i++)
    {
        if (numeroAmericano[i] == '.' || numeroAmericano[i] == ',')
        {
            posicaoPonto = i;
            break;
        }
    }

    // Se não houver ponto decimal, o número já está no padrão nacional
    if (posicaoPonto == -1)
    {
        printf("O numero ja esta no padrao nacional: %s\n", numeroAmericano);
        return;
    }

    // Copiar a parte inteira para a string de destino
    for (i = 0; i < posicaoPonto; i++)
    {
        numeroNacional[i] = numeroAmericano[i];
    }

    // Adicionar o separador de milhares no padrão nacional
    j = 0;
    for (i = posicaoPonto - 1; i >= 0; i--)
    {
        if (j == 3)
        {
            numeroNacional[posicaoPonto] = '.';
            posicaoPonto++;
            j = 0;
        }
        numeroNacional[posicaoPonto] = numeroAmericano[i];
        posicaoPonto++;
        j++;
    }

    // Adicionar a parte fracionária no padrão nacional
    numeroNacional[posicaoPonto] = ',';
    posicaoPonto++;
    for (i = posicaoPonto - 1; i < posicaoPonto + 3; i++)
    {
        numeroNacional[i] = numeroAmericano[i - 1];
    }

    // Adicionar o caractere nulo no final da string
    numeroNacional[posicaoPonto + 2] = '\0';

    printf("Numero no padrao nacional: %s\n", numeroNacional);
}

int main()
{
    char numeroAmericano[20]; // Pode ajustar o tamanho conforme necessário

    // Solicitar ao usuário inserir o número no formato americano
    printf("Digite o numero no formato americano: ");
    scanf("%s", numeroAmericano);

    // Chamar o subprograma para converter o número
    converterParaPadraoNacional(numeroAmericano);

    return 0;
}
