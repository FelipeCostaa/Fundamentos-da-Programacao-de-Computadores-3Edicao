/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap6, ex13, resolvido*/

#include <stdio.h>
#include <stdlib.h>

#define tam 10

int main(int argc, char **argv)
{
  int vetor[tam], achou;

  printf("\n\tInforme o vetor: ");
  for (int i = 0; i < tam; i++)
  {
    printf("\n%dº numero do vetor: ", i + 1);
    scanf("%d", &vetor[i]);
  }
  achou = 0;
  for (int i = 0; i < tam; i++)
  {
    if (vetor[i] > 50)
    {
      printf("\nNumero %d, posição %d", vetor[i], i + 1);
      achou = 1;
    }
  }
  if (achou == 0)
  {
    printf("\nNão exitem numeros superiores a 50 no vetor");
  }

  return (EXIT_SUCCESS);
}
