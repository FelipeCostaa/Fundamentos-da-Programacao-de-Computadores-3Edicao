/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap6, ex7, resolvido*/

#include <stdio.h>
#include <stdlib.h>

#define tam 8

int main(int argc, char **argv)
{
  int vetor[tam], auxiliar, i, j;

  for (i = 0; i < tam; i++)
  {
    printf("\n\tInforme o %dº numero para o vetor: ", i + 1);
    scanf("%d", &vetor[i]);
  }
  printf("\n-----------------------------------------------------");

  printf("\n\tOrdem atual dos numeros: ");
  for (i = 0; i < tam; i++)
  {
    printf("\n\t%d    ", vetor[i]);
  }
  printf("\n-----------------------------------------------------");

  //metodo de ordanação buble sort
  for (i = 0; i < tam; i++)
  {
    for (j = i + 1; j < tam; j++)
    {
      if (vetor[i] > vetor[j])
      {
        auxiliar = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = auxiliar;
      }
    }
  }

  printf("\n\tO vetor informado e organizado em forma crescente é: ");
  for (i = 0; i < tam; i++)
  {
    printf("\n\t%d", vetor[i]);
  }

  return (EXIT_SUCCESS);
}
