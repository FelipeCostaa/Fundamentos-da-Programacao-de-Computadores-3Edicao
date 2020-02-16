/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap6, ex6, resolvido*/

#include <stdio.h>
#include <stdlib.h>
#define TAM1 10
#define TAM2 20

int main(int argc, char **argv)
{
  int vetorX[TAM1], vetorY[TAM1], uniaoXeY[TAM2];
  int i, contU, contD, contI;

  for (i = 0; i < 10; i++)
  {
    printf("\nInforme %d numero para o vetor X: ", i++);
    scanf("%d%*c", &vetorX[i]);
    printf("\nInforme %d numero para o vetor Y: ", i++);
    scanf("%d%*c", &vetorY[i]);
  }
  for (i = 0; i < 10; i++)
  {
    printf("\n\tA união dos vetore X e Y é: ");
    if (vetorX[i] == vetorY[i])
    {
      uniaoXeY[i];
    }
    else
    {
      uniaoXeY[i] = vetorX;
      uniaoXeY[i+1] = vetorY;
      printf("%d\t", uniaoXeY[i]);
    }
  }

  return (EXIT_SUCCESS);
}
