#include <stdio.h>

void fat(float n, float *result)
{
    *result = 1.0;
    while (n > 1)
    {
        *result *= n;
        n--;
    }
}

int main()
{
    float p, n, cnp;
    scanf("%f", &p);
    scanf("%f", &n);

    if (n >= p)
    {
        float pFactorial, nFactorial, nMinusPFactorial;

        fat(n, &nFactorial);
        fat(p, &pFactorial);
        fat(n - p, &nMinusPFactorial);

        cnp = nFactorial / (pFactorial * nMinusPFactorial);
        printf("Cnp is equal to %f", cnp);
    }
    else
        printf("Something is wrong");

    return 0;
}