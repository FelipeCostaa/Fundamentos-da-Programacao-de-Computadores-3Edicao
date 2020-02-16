/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam1 7

int main(int argc, char const *argv[])
{
	int vetorPrincipal[tam1];
  int i;
  // int verifica = 0;

  printf("\nInforme os dados do vetor: \n");
  for (i = 0; i < tam1; i++)
  {
    printf("%dº numero: ", i + 1);
    scanf("%d", &vetorPrincipal[i]);
  }
  printf("\nNumeros informados: ");
  for (i = 0; i < tam1; i++)
  {
    printf("%d - ", vetorPrincipal[i]);
  }
  printf("\n");

  for (i = 0; i < tam1; i++) // numeros multiplos de 2
  {
    if (vetorPrincipal[i]%2 == 0)
    {
      printf("\n%d é multiplo de 2.", vetorPrincipal[i]);
    }
    if (vetorPrincipal[i]%3 == 0)
    {
      printf("\n%d é multiplo de 3.", vetorPrincipal[i]);
    }
    if (vetorPrincipal[i]%2 == 0 && vetorPrincipal[i]%3 ==0)
    {
      printf("\n%d é multiplo de 2 e 3.", vetorPrincipal[i]);
    }
  } 

	return 0;
}