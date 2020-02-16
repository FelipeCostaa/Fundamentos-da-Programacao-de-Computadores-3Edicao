/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam1 15

int main(int argc, char const *argv[])
{
  int vetorPrincipal[tam1];
  int i;
  int verificacao;

  printf("\nInforme os dados do vetor: ");
  for (i = 0; i < tam1; i++)
  {
    printf("\n%dº numero: ", i + 1);
    scanf("%d", &vetorPrincipal[i]);
  }

  system("clear");

  printf("\nNumeros informados: ");
  for (i = 0; i < tam1; i++)
  {
    printf("%d - ", vetorPrincipal[i]);
  }

  verificacao = 0;
  for (i = 0; i < tam1; i++)
  {
    if (vetorPrincipal[i] == 30)
    {
      printf("\nPosição do numero 30 no vetor: %d", i + 1);
      verificacao++;
    }
  }
  if (verificacao == 0 && tam1 == i)
  {
    printf("\nNo vetor não ha nenhum numero igual a 30."); 
  }
	
	return 0;
}