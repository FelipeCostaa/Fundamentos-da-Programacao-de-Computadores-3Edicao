/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap6, ex4, resolvido*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  int i, vetor[8], positivo[8], negativo[8], contador, contPositivo, contNegativo;

  contPositivo = 1;
  contNegativo = 1;

  for (i = 0; i < 8; i++)
  {
    printf("\nInforme um numero inteiro para preencher o vetor: ");
    scanf("%d%*c", &vetor[i]);
    if (vetor[i] >= 0)
    {
      positivo[contPositivo] = vetor[i];
      contPositivo++;
    }
    else
    {
      negativo[contNegativo] = vetor[i];
      contNegativo++;
    }
  }
  if (contNegativo = 1)
  {
    printf("\n\tVetor de numeros negativos vazio.");
  }
  else
  {
    printf("\n\tVetor de numeros negativos");
    for (i = 0; i < contNegativo - 1; i++)
    {
      printf("%d\t", negativo[i]);
    }
  }
  if (contPositivo = 1)
  {
    printf("\n\tVetor de numeros positivos vazio.");
  }
  else
  {
    printf("\n\tVetor de numeros positivos");
    for (i = 0; i < contPositivo - 1; i++)
    {
      printf("%d\t", positivo[i]);
    }
  }

  return (EXIT_SUCCESS);
}
