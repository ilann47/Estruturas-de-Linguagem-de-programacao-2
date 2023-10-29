/*
Um armazém comercializa 100 diferentes mercadorias,
identificadas por números inteiros de 1 a 100.
A quantidade de mercadorias em estoque e o preço de cada mercadoria devem
ser armazenadas em conjuntos distintos.
Ao fim de cada dia de trabalho,
o comerciante fornece um conjunto com o total de cada mercadoria que foi vendida.
Faça um programa em linguagem C que seja capaz de:



a) conhecer os valores de cada conjunto(vetor); //

b) calcular e informar a situação do estoque do comerciante ao fim do dia para cada mercadoria;

c) calcular e informar o faturamento do dia com a venda das mercadorias.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

#define TF 5

#define TL TF

void infoValor(int valor[TF])
{
    for (int i = 0; i < TL; i++)
    {
        printf("Qual o valor da mercadoria: %d  ", i + 1);
        scanf("%d", &valor[i]);
    }
}
void infoEstoque(int estoque[TF])
{
    for (int i = 0; i < TL; i++)
    {
        printf("Qual o estoque da mercadoria: %d  ", i + 1);
        scanf("%d", &estoque[i]);
    }
}
int DaySituation(int CadastroVendido[TF], int QntdVendas[TF], int estoque[TF], int valor[TF])
{
    int faturamento = 0;
    for (int i = 0; i < TL; i++)
    {
        QntdVendas[i] = 0;
        CadastroVendido[i] = 0;
    }
    int i = 0;
    while (1)
    {
        printf("Digite o codigo da mercadoria vendida: | 0 para SAIR |  ");
        scanf("%d", &CadastroVendido[i]);
        if (CadastroVendido[i] == 0)
            break;

        printf("Quantidade de vendas dessa mercadoria:  ");
        scanf("%d", &QntdVendas[i]);
        faturamento += valor[CadastroVendido[i] - 1] * QntdVendas[i];
        estoque[CadastroVendido[i] - 1] -= QntdVendas[i];
        i++;
    }
    for (int j = 0; j < TL; j++)
    {
        printf("Estoque da mercadoria %d: %d\n", j + 1, estoque[j]);
    }

    return faturamento;
}
int main()
{
    int estoque[TF], valor[TF], CadastroVendido[TF], QntdVendas[TF], faturamento = 0;
    infoEstoque(estoque);
    infoValor(valor);
    printf("Situation do estoque ao final do dia depois de todas as vendas:\n\n");
    faturamento = DaySituation(CadastroVendido, QntdVendas, estoque, valor);
    printf("Faturamento do dia: %d", faturamento);
    return 0;
}

void main()
{
    printf("Im testing something in somewhere");
}