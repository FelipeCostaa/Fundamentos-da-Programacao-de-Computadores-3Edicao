/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam1 10

int main(int argc, char const *argv[])
{
	int vetorPrincipal[tam1];
  int numNegativo = 0, somaPositivos = 0;
  int i;

  printf("\nInforme os valores: ");
  for (i = 0; i < tam1; i++)
  {
    printf("\n%dº numero: ", i + 1);
    scanf("%d", &vetorPrincipal[i]);
    if (vetorPrincipal[i] < 0)
    {
      numNegativo++;
    }
    if (vetorPrincipal[i] > 0)
    {
      somaPositivos += vetorPrincipal[i];
    }
  }
  printf("\nQuantidade de numeros negativos: %d", numNegativo);
  printf("\nSoma de todos os numeros positivos: %d", somaPositivos);
  
	return 0;
}