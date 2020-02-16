/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap6, ex15, resolvido*/

/*
Faça um programa que preencha um primeiro vetor com dez números inteiros, e um segundo vetor
com cinco números inteiros. O programa deverá mostrar uma lista dos números do primeiro vetor com
seus respectivos divisores armazenados no segundo vetor, bem como suas posições.
Exemplo de saída do programa: 
5 12 4 7 10 3 2 6 23 16

3 11 5 8 2
*/

#include <stdio.h>
#include <stdlib.h>

#define tam1 10
#define tam2 5

int main(int argc, char **argv)
{
  int vetor1[tam1], vetor2[tam2], achou;

  //recebe os valores do primeiro vetor
  printf("\nInforme os dados do primeiro vetor: ");
  for (int i = 0; i < tam1; i++)
  {
    printf("\n%dº numero: ", i + 1);
    scanf("%d", &vetor1[i]);
  }
  //recebe os valores do segundo vetor
  printf("\nInforme os dados do segundo vetor: ");
  for (int i = 0; i < tam2; i++)
  {
    printf("\n%dº numero: ", i + 1);
    scanf("%d", &vetor2[i]);
  }

  for (int i = 0; i < tam2; i++)
  {
    achou = 0;
    for (int j = 0; j < tam2; j++)
    {
      if (vetor1[i] % vetor2[i] == 0)
      {
        printf("\nDivisivel por %d na posição %d", vetor2[j], j);
        achou = 1;
      }
    }
    if (achou == 0)
    {
      printf("\nEste numero não possui divisores no segundo vetor.");
    }
  }

  return (EXIT_SUCCESS);
}
