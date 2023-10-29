
#include <stdio.h>
#include <math.h>


void main()
{
    int vet[100], temp, a, b, i;
    for(i=0;i<100;i++)
    {
        scanf("%d", &vet[i]);
    }
    for(a=0;a<99;a++)
    {
        for(b=a+1;b<100;b++){
            if(vet[a]>vet[b])
            {
                temp=vet[a];
                vet[a]=vet[b];
                vet[b]=temp;
            }
        }
    }
    for(i=0;i<100;i++)
    {
        printf("%d ", vet[i]);
    }
}
