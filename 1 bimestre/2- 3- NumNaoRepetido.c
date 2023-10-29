/*
Faça um programa em linguagem C que receba como entrada dois conjuntos(vetores) 
de elementos inteiros e seus respectivos tamanhos lógicos, 
com no máximo 100 elementos cada um, 
que seja capaz construir um terceiro conjunto que contenha a união dos 
elementos entre os dois conjuntos dados. 
No conjunto união não poderá existir elementos repetidos.
*/

#include <stdio.h>
#define TF 100

int main()
{
    int b = 0, vet1[TF], vet2[TF], vet3[TF], i, TL1, TL2, TL3, a, achei;
    printf("Tamanho Logico:\n");
    scanf("%d", &TL1);
    TL2 = TL3 = TL1;
    printf("Primeiro Vetor:\n");
    for (i = 0; i < TL1; i++)
    {
        printf("%d --> ", i + 1);
        scanf("%d", &vet1[i]);
    }
    printf("Segundo Vetor:\n");
    for (i = 0; i < TL2; i++)
    {
        printf("%d --> ", i + 1);
        scanf("%d", &vet2[i]);
    }
    for (i = 0; i < TL3; i++)
    {
        vet3[i] = 0;
    }
    for (i = 0; i < TL1; i++)
    {
        achei = 0;
        for (a = 0; a < TL2; a++)
        {
            if (vet1[i] == vet2[a])
            {
                achei = 1;
                break;
            }
        }
        if (!achei)
        {
            vet3[b] = vet1[i];
            b++;
        }
    }

    for (i = 0; i < TL2; i++)
    {
        achei = 0;
        for (a = 0; a < TL1; a++)
        {
            if (vet2[i] == vet1[a])
            {
                achei = 1;
                break;
            }
        }
        if (!achei)
        {
            vet3[b] = vet2[i];
            b++;
        }
    }

    printf("Vetor 3:\n");
    for (i = 0; i < b; i++)
    {
        printf("%d --> %d\n", i + 1, vet3[i]);
    }

    return 0;
}
