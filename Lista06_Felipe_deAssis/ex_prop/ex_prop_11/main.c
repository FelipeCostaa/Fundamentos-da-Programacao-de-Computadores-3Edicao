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
  int vetorPrincipal[tam1], vetorPar[tam1], vetorImpar[tam1];
  int i;
  int contPar = 0, contImpar = 0;

  printf("\nInforme os numeros: ");
  for (i = 0; i < tam1; i++)
  {
    printf("\n%dº numero: ", i + 1);
    scanf("%d", &vetorPrincipal[i]);
    if (vetorPrincipal[i] % 2 == 0)
    {
      vetorPar[contPar] = vetorPrincipal[i];
      contPar++;
    }
    else
    {
      vetorImpar[contImpar] = vetorPrincipal[i];
      contImpar++;
    }
  }
  system("clear");

  printf("\nNumeros informados: ");
  for (i = 0; i < tam1; i++)
  {
    printf("%d - ", vetorPrincipal[i]);
  }
  
  printf("\nNumeros pares: ");
  if (contPar == 0)
  {
    printf("Não foram informados numeros pares.");
  }
  else
  {
    for (i = 0; i < contPar; i++)
    {
      printf("%d - ", vetorPar[i]);
    }
  }
  
  printf("\nNumeros impares: ");
  if (contImpar == 0)
  {
    printf("Não foram informados numeros impares.");
  }
  else
  {
    for (i = 0; i < contImpar; i++)
    {
      printf("%d - ", vetorImpar[i]);
    }
  }
  
	return 0;
}