/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap6, ex8, resolvido*/

#include <stdio.h>
#include <stdlib.h>

#define tam1 5
#define tam2 10

int main(int argc, char **argv)
{
  int vetor1[tam1], vetor2[tam1], uniaoVetores[tam2], auxiliar;
  int i, j;
  //primeiro vetor
  printf("\nPrimeiro vetor: ");
  for (int i = 0; i < tam1; i++)
  {
    printf("\nInforme o %dº numero do vetor: ", i + 1);
    scanf("%d", &vetor1[i]);
    uniaoVetores[i] = vetor1[i];
  }
  //segundo vetor
  printf("\nSegundo vetor: ");
  for (int i = 0; i < tam1; i++)
  {
    printf("\nInforme o %dº numero do vetor: ", i + 1);
    scanf("%d", &vetor2[i]);
    uniaoVetores[i + 5] = vetor2[i];
  }

  printf("\nVetores: ");
  printf("\nVetor 1: ");
  for (int i = 0; i < tam1; i++)
  {
    printf("\t  %d", vetor1[i]);
  }
  printf("\nVetor 2: ");
  for (int j = 0; j < tam1; j++)
  {
    printf("\t  %d", vetor2[j]);
  }
  printf("\n\nUnião dos vetores: ");
  for (int i = 0; i < tam2; i++)
  {
    printf("\t  %d", uniaoVetores[i]);
  }

  //ordenando e juntando os vetores
  for (i = 0; i < tam2; i++)
  {
    for (j = i + 1; j < tam2; j++)
    {
      if (uniaoVetores[i] > uniaoVetores[j])
      {
        auxiliar = uniaoVetores[i];
        uniaoVetores[i] = uniaoVetores[j];
        uniaoVetores[j] = auxiliar;
      }
    }
  }
  printf("\n\nUnião dos vetores em ordem crescente: ");
  for (i = 0; i < tam2; i++)
  {
    printf("\t  %d", uniaoVetores[i]);
  }
  

  return (EXIT_SUCCESS);
}
