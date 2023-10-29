/*
Fazer Um programa em C que tenha um subprograma, ele deve fazer o fatorial para o calculo abaixo:
*/

#include <stdio.h>

float fat(float n)
{
    float fato = 1;
    while (n > 1)
    {
        fato *= n;
        n--;
    }
    return fato;
}

int main()
{
    float p, n, cnp;
    scanf("%f", &p);
    scanf("%f", &n);
    if (n >= p)
    {
        cnp = fat(n) / (fat(p) * fat(n - p));
        printf(" Cnp is equal to %f", cnp);
    }
    else
        printf(" something is wrong ");

    return 0;
}