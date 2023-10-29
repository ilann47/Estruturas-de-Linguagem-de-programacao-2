/*
Faça um programa em linguagem C que tendo como dado de entrada um número inteiro positivo inferior a 4.000,
que seja capaz de transformar este
número no seu equivalente em algarismos romanos.

    I = 1          V = 5          X = 10        L = 50

   C = 100      D = 500      M = 1000

Lembrando que em algarismos romanos existe uma regra que não permite a mesma letra seja repetida mais de três vezes seguidamente. Exemplo

        4 = IIII  está errado. A letra I está repetida seguidamente mais de 3 vezes. A forma correta é IV (cinco com um a menos)

       9  =  IX (dez com um a menos)

     40  =  XL (cinqüenta com dez a menos)

     90  =  XC (cem com dez a menos)Faça um programa em linguagem C que tendo como dado de entrada um número inteiro positivo inferior a 4.000,
     que seja capaz de transformar este número no seu equivalente em algarismos romanos.

    I = 1          V = 5          X = 10        L = 50

   C = 100      D = 500      M = 1000

Lembrando que em algarismos romanos existe uma regra que não permite a mesma letra seja repetida mais de três vezes seguidamente. Exemplo

        4 = IIII  está errado. A letra I está repetida seguidamente mais de 3 vezes. A forma correta é IV (cinco com um a menos)

       9  =  IX (dez com um a menos)

     40  =  XL (cinqüenta com dez a menos)

     90  =  XC (cem com dez a menos)

    400 =  CD (quinhentos com cem a menos)

    900 =  CM (mil com cem a menos)

        6 =  VI (cinco com um a mais)



    assim, 1998 é equivalente a MCMXCVIII em romano



      sugestão: enquanto o número for maior que 1000 subtraia este valor do número dado e concatene a letra "M" em uma cadeia de caracteres.
      Após, verifique se o que restou do número cai na exceção do 900, se cair, retire 900 do valor atual e concatene na cadeia as letras "CM",
      e assim por diante até o valor do número dado seja zero.

    400 =  CD (quinhentos com cem a menos)

    900 =  CM (mil com cem a menos)

        6 =  VI (cinco com um a mais)



    assim, 1998 é equivalente a MCMXCVIII em romano



      sugestão: enquanto o número for maior que 1000 subtraia este valor do número dado e concatene a letra "M" em uma cadeia de caracteres.
      Após, verifique se o que restou do número cai na exceção do 900, se cair, retire 900 do valor atual e concatene na cadeia as letras "CM",
      e assim por diante até o valor do número dado seja zero.
*/
#include <stdio.h>
#include <string.h>

int main()
{
    int numero, J = 0;
    char romano[50] = "";
    scanf("%d", &numero);
    while (numero > 0 && numero < 4000)
    {
        while (numero >= 1000)
        {
            numero -= 1000;
            strcat(romano, "M");
        }
        while (numero >= 900)
        {
            numero -= 900;
            strcat(romano, "CM");
        }
        while (numero >= 500)
        {
            numero -= 500;
            strcat(romano, "D");
        }
        while (numero >= 400)
        {
            numero -= 400;
            strcat(romano, "CD");
        }
        while (numero >= 100)
        {
            numero -= 100;
            strcat(romano, "C");
        }
        while (numero >= 90)
        {
            numero -= 90;
            strcat(romano, "XC");
        }
        while (numero >= 50)
        {
            numero -= 50;
            strcat(romano, "L");
        }
        while (numero >= 40)
        {
            numero -= 40;
            strcat(romano, "XL");
        }
        while (numero >= 10)
        {
            numero -= 10;
            strcat(romano, "X");
        }
        while (numero >= 9)
        {
            numero -= 9;
            strcat(romano, "IX");
        }
        while (numero >= 5)
        {
            numero -= 5;
            strcat(romano, "V");
        }
        while (numero >= 4)
        {
            numero -= 4;
            strcat(romano, "IV");
        }
        while (numero >= 1)
        {
            numero -= 1;
            strcat(romano, "I");
        }
    }
    puts(romano);
    return 0;
}
