/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap6, ex16, resolvido*/

#include <stdio.h>
#include <stdlib.h>

#define tam1 10
#define tam2 5

int main(int argc, char **argv)
{
  int vetor1[tam1], vetor2[tam2], vetorResultante1[tam1], vetorResultante2[tam1];
  int i, j, posicaoLivre1 = 0, posicaoLivre2 = 0, soma = 0;

  //preenche o primeiro vetor
  for (i = 0; i < tam1; i++)
  {
    printf("\nInforme o %dº do primeiro vetor: ", i + 1);
    scanf("%d", &vetor1[i]);
  }
  printf("\n----------------------------------------------");
  //preenche o segundo vetor
  for (j = 0; j < tam2; j++)
  {
    printf("\nInforme o %dº do segundo vetor: ", j + 1);
    scanf("%d", &vetor2[j]);
  }
  /*O primeiro vetor resultante será composto pelos números pares, gerados pelo
  /*elemento do primeiro vetor somado a todos os elementos do segundo vetor
  /*o segundo será composto pelos números ímpares gerados pelo elemento do primeiro 
  /*vetor somadoa todos os elementos do segundo vetor */
  //Primeiro vetor resultante
  for (i = 0; i < tam1; i++)
  {
    soma = vetor1[i];
    for (j = 0; j < tam2; j++)
    {
      soma = soma + vetor2[j];
    }
    if (soma % 2 == 0)
    {
      vetorResultante1[posicaoLivre1] = soma;
      posicaoLivre1 += 1;
    }
    else
    {
      vetorResultante2[posicaoLivre2] = soma;
      posicaoLivre2 += 1;
    }
  }
  printf("\n\tO primeiro vetor resultante é: ");
  for (i = 0; i < posicaoLivre1 - 1; i++)
  {
    printf("\t %d ", vetorResultante1[i]);
  }
  printf("\n\tO segundo vetor resultante é: ");
  for (i = 0; i < posicaoLivre2 - 1; i++)
  {
    printf("\t %d ", vetorResultante2[i]);
  }

  return (EXIT_SUCCESS);
}
