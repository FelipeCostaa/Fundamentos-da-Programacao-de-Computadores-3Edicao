/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap6, ex3, resolvido*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  int i, n, j, vetor1[10], vetor2[10], vetor3[20];

  n = 1;

  for (i = 0; i < 10; i++)
  {
    printf("Informe o %dº numero do 1º vetor: ", n);
    scanf("%d%*c", &vetor1[i]);
    vetor3[j] = vetor1[i];
    j++;
    printf("Informe o %dº numero do 2º vetor: ", n);
    scanf("%d%*c", &vetor2[i]);
    vetor3[j] = vetor2[i];
    n++;
  }

  printf("\n\tA vetor resultante da intercalação dos vetores 1 e 2: \n");
  for (j = 0; j < 20; j++)
  {
    printf("%d\t", vetor3[j]);
  }

  return (EXIT_SUCCESS);
}
