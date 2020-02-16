/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam1 10
#define tam2 5

int main(int argc, char const *argv[])
{
  int vetor1[tam1], vetor2[tam2], resultante1[tam1], resultante2[tam1];
  int i, j;
  int contDivVetor1, somaVetor2;
  int contPar;

  contDivVetor1 = 0;
  somaVetor2 = 0;
  contPar = 0;

  printf("\nPrimeiro vetor: ");
  for (i = 0; i < tam1; i++)
  {
    printf("\n%dº numero: ", i + 1);
    scanf("%d", &vetor1[i]);
    if (vetor1[i] % 2 == 0)
    {
      resultante1[contPar] = vetor1[i];
      contPar++;
    }
    else
    {
      for (j = 0; j < i; j++)
      {
        
      }
    }
  }

  system("clear");

  printf("\nSegundo vetor: ");
  for (i = 0; i < tam2; i++)
  {
    printf("\n%dº numero: ", i + 1);
    scanf("%d", &vetor2[i]);
    
    somaVetor2 += vetor2[i];
  }
  
  system("clear");

  printf("\nPrimeiro vetor: \n");
  for (i = 0; i < tam1; i++)
  {
    printf("%d - ", vetor1[i]);
  }
  printf("\nSegundo vetor: \n");
  for (i = 0; i < tam2; i++)
  {
    printf("%d - ", vetor2[i]);
  }
  
  printf("\n\nPrimeiro vetor resultante: \n");
  for (i = 0; i < contPar; i++)
  {
    resultante1[i] += somaVetor2;
    printf("%d - ", resultante1[i]);
  }
  printf("\nSegundo vetor resultante: \n");
  for (i = 0; i < tam1; i++)
  {

  }
  

	return 0;
}