#include <stdio.h>
#define TF 10
#define Tlc TF
#define Tll TF

void main()
{
    int vet[TF][TF], i, a, maiorVet, menorVet, Cmaior = 0, Cmenor = 0, Lmaior = 0, Lmenor = 0;
    for (i = 0; i < Tll; i++)
    {
        for (a = 0; a < Tlc; a++)
        {
            scanf("%d", &vet[i][a]);
        }
    }
    maiorVet = menorVet = vet[0][0];
    for (i = 0; i < Tll; i++)
    {
        for (a = 0; a < Tlc; a++)
        {
            if (vet[i][a] > maiorVet)
            {
                maiorVet = vet[i][a];
                Cmaior = i;
                Lmaior = a;
            }
            if (vet[i][a] < menorVet)
            {
                menorVet = vet[i][a];
                Cmenor = i;
                Lmenor = a;
            }
        }
    }
    printf("Maior: %d, Coluna: %d, Linha: %d", maiorVet, Cmaior, Lmaior);
    printf("Menor: %d, Coluna: %d, Linha: %d", menorVet, Cmenor, Lmenor);
}
