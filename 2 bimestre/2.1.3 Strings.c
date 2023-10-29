/*
4) Faça um subprograma em linguagem C que receba como entrada uma cadeia com no máximo 50 caracteres,
e dois valores numéricos inteiros e positivos, que indicam duas posições da cadeia de caracteres fornecida,
e que seja capaz de eliminar todos os caracteres que estiverem entre estas duas posições, inclusive.



 Texto := 'Em casa de ferreiro, espeto e de pau';

 pos1  :=  8;

 pos2  := 19;

 resultado := 'Em casa, espeto é de pau';
*/
#include <stdio.h>
#include <string.h>

void eliminarCaracteres(char cadeia[], int posicaoInicio, int posicaoFim)
{
    int tamanho = strlen(cadeia);

    // Verifica se as posições são válidas
    if (posicaoInicio < 0 || posicaoFim >= tamanho || posicaoInicio > posicaoFim)
    {
        printf("Posições inválidas.\n");
        return;
    }

    // Move os caracteres à esquerda para "eliminar" os caracteres entre as posições
    for (int i = posicaoFim + 1; i <= tamanho; i++)
    {
        cadeia[posicaoInicio + i - posicaoFim - 1] = cadeia[i];
    }
}

int main()
{
    char cadeia[51];
    int posicaoInicio, posicaoFim;

    // Recebe a entrada
    printf("Digite uma cadeia de no máximo 50 caracteres: ");
    fgets(cadeia, sizeof(cadeia), stdin);
    cadeia[strcspn(cadeia, "\n")] = '\0'; // Remove o caractere de nova linha adicionado pelo fgets

    printf("Digite a posição de início: ");
    scanf("%d", &posicaoInicio);

    printf("Digite a posição de fim: ");
    scanf("%d", &posicaoFim);

    // Chama a função para eliminar os caracteres entre as posições
    eliminarCaracteres(cadeia, posicaoInicio, posicaoFim);

    // Imprime a cadeia resultante
    printf("Cadeia resultante: %s\n", cadeia);

    return 0;
}
