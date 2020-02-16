/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap6, ex6, resolvido*/

#include <stdio.h>
#include <stdlib.h>

#define tam 10

int main(int argc, char **argv)
{
  int vetor[tam], auxiliar;

  printf("\nInforme os numeros para preencher o vetor: ");
  for (int i = 0; i < tam; i++)
  {
    printf("\n%dº numero: ", i + 1);
    scanf("%d", &vetor[i]);
  }
  for (int i = 0; i < tam; i++)
  {
    for (int j = i + 1; j < tam; j++)
    {
      if (vetor[j] > vetor[i])
      {
        auxiliar = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = auxiliar;
      }
    }
  }
  for (int j = 0; j < tam; j++)
  {
    printf("\n\tVetor ordenado de forma decrescente: ");
    printf("%d", vetor[j]);
  }

  return (EXIT_SUCCESS);
}
