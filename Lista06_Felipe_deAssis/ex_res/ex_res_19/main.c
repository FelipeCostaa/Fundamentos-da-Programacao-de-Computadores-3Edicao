/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap6, ex19, resolvido*/

#include <stdio.h>
#include <stdlib.h>

#define tam1 20

int main(int argc, char **argv)
{
  char vetorA[tam1], vetorB[tam1], auxiliar;
  int i, j;
  //preenche o vetor A
  printf("\nPrimeiro vetor: ");
  for (i = 0; i < tam1; i++)
  {
    printf("\n\t%dº caractere do vetor: ", i + 1);
    scanf(" %c*%c", &vetorA[i]);
  }
  printf("\n-------------------------------------------");
  //preenche o vetor B
  printf("\nSegundo vetor: ");
  for (i = 0; i < tam1; i++)
  {
    printf("\n\t%dº caractere do vetor: ", i + 1);
    scanf(" %c*%c", &vetorB[i]);
  }
  printf("\n-------------------------------------------");
  //mostra o vetor A
  printf("\n\tVetor A: \n");
  for (i = 0; i < tam1; i++)
  {
    printf("\t %c ", vetorA[i]);
  }
  //mostra o vetor B
  printf("\n\n\tVetor B: \n");
  for (i = 0; i < tam1; i++)
  {
    printf("\t %c ", vetorB[i]);
  }
  printf("\n-------------------------------------------");
  //organiza os vetores
  j = tam1;
  for (i = 0; i < tam1; i++)
  {
    auxiliar = vetorA[i];
    vetorA[i] = vetorB[j];
    vetorB[j] = auxiliar;
    j -= 1;
  }
  //exibe o vetor A
  printf("\n\tVetor A organizado segundo o enunciado: ");
  for (i = 0; i < tam1; i++)
  {
    printf("\t %c ", vetorA[i]);
  }
  //exibe o vetor B
  printf("\n\n\tVetor B organizado segundo o enunciado: ");
  for (i = 0; i < tam1; i++)
  {
    printf("\t %c ", vetorB[i]);
  }

  return (EXIT_SUCCESS);
}
