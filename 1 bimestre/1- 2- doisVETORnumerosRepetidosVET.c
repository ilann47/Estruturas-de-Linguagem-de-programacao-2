#include <stdio.h>
#define TF 10
#define TL1 TF
#define TL2 TF


void main()
{
    int vet1[TF], vet2[TF], vet3[TF], i, b = 0, a;
    printf("Vetor 1\n\n");
    for ( i = 0; i < TL1; i++)
    {
        printf("\n %d -> ", i);
        scanf("%d", &vet1[i]);
    }
    printf("Vetor 2\n\n");
    for ( i = 0; i < TL2; i++)
    {
        printf("\n %d -> ", i);
        scanf("%d", &vet2[i]);
    }
    printf("\n\n\n");
    for ( i = 0; i < TL1; i++)
    {
        vet3[i] = 0;
    }
    
    for ( i = 0; i < TL1; i++)
    {
        for ( a = 0; a < TL2; a++)
        {
            if ( vet1[i] == vet2[a])
            {
                vet3[b] = vet1[i];
                b++;
            }
        }
        
    }
    for ( i = 0; i < TL1; i++)
    {
        printf(" %d -> %d\n", i, vet3[i]);
    }
    

    
    
}