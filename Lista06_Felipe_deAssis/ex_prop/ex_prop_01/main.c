/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam1 6

int main(int argc, char const *argv[])
{
	int vetorPrincipal[tam1], vetorPar[tam1], vetorImpar[tam1];
  int i;
  int contPar, contImpar;

  printf("\nInforme os dados do vetor: ");
  for (i = 0; i < tam1; i++)
  {
    printf("\n%dº numero: ", i + 1);
    scanf("%d", &vetorPrincipal[i]);
  }
  printf("\nNumeros informados: ");
  for (i = 0; i < tam1; i++)
  {
    printf("%d - ", vetorPrincipal[i]);
  }
  
  contImpar = 0;
  contPar = 0;
  for (i = 0; i < tam1; i++) //identifica os numeros pares e impares
  {
    if (vetorPrincipal[i]%2 == 0)
    {
      vetorPar[contPar] = vetorPrincipal[i];
      contPar++;
    }
    if (vetorPrincipal[i]%2 == 1)
    {
      vetorImpar[contImpar] = vetorPrincipal[i];
      contImpar++;
    }
  }
  
  printf("\nQuantidade de numeros pares informados: %d", contPar);
  printf("\nNumeros pares informados: ");
  for (i = 0; i < contPar; i++)
  {
    printf("%d - ", vetorPar[i]);
  }

  printf("\nQuantidade de numeros impares informados: %d", contImpar);
  printf("\nNumeros impares informados: ");
  for (i = 0; i < contImpar; i++)
  {
    printf("%d - ", vetorImpar[i]);
  }
  

	return 0;
}