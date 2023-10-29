/*
Faça um programa em linguagem C que capaz de fazer a soma de 
dois vetores de dimensões N.
 Os valores dos dois vetores, bem como os do vetor resultado
  devem ser armazenados em conjuntos. 
  Os vetores têm no máximo 50 coeficientes.

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#define TF 50

int readArray (int vet[TF], int N)
{
  for (int i = 0; i < N; i++)
  {
    printf("Writhe the element %d: ", i + 1);
    scanf("%d", &vet[i]);
  }
}
void addArray (int vet1[TF], int vet2[TF], int Result[TF], int N)
{
  for (int i = 0; i < N; i++)
  {
    Result[i] = vet1[i] + vet2[i];
  }
  
}
void showArray(int vet[TF], int N)
{
  for ( int i = 0; i < N; i++)
  {
    printf("%d", vet[i]);
    printf("\n");
  }

}

void main()
{
  int N;
  printf("Digite o valor da dimensao: \n");
  scanf("%d", &N);
  if(N <= 0 || N > 50)
    printf("A dimensao deve estar entre 1 e %d", TF);
  
  int vet1[TF], vet2[TF], Result[TF];

  printf("Digite os valores do primeiro vetor:\n");
  readArray(vet1, N);

  printf("Digite os valores do segundo vetor:\n");
  readArray(vet2, N);

  addArray(vet1, vet2, Result, N);

  showArray(Result, N);


}