#include <stdio.h>

// Função para buscar um elemento em um array
int achar(int array[], int tamanho, int elemento)
{
    for (int i = 0; i < tamanho; i++)
    {
        if (array[i] == elemento)
        {
            return i; // Retorna o índice onde o elemento foi encontrado
        }
    }
    return -1; // Retorna -1 se o elemento não for encontrado
}

int main()
{
    int i, tamanho, elementoBuscado;
    printf("Qual o tamanho do array?:\n");
    scanf("%d", &tamanho);
    int meuArray[tamanho];
    printf("Qual e o elemento que queres buscar dentro deste array?:\n");
    scanf("%d", &elementoBuscado);
    printf("Elementos presentes no array:\n");
    for (i = 0; i < tamanho; i++)
    {
        printf("\n %d -> ", i);
        scanf("%d", &meuArray[i]);
    }

    int indice = achar(meuArray, tamanho, elementoBuscado);

    if (indice != -1)
    {
        printf("O elemento %d foi encontrado no indice %d.\n", elementoBuscado, indice);
    }
    else
    {
        printf("O elemento %d nao foi encontrado no array.\n", elementoBuscado);
    }

    return 0;
}
