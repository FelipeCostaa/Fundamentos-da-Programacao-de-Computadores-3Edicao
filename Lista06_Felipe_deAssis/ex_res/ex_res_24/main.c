/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap6, ex24, resolvido*/

#include <stdio.h>
#include <stdlib.h>

#define tam1 10

int main(int argc, char **argv)
{
  int vetorA[tam1], repetidos[tam1];
  int i, j;
  int cont;

  // preenche o vetorA
  printf("\nPreencha o vetor: ");
  for (i = 0; i < tam1; i++)
  {
    printf("\n%dº numero do vetor: ", i + 1);
    scanf("%d", &vetorA[i]);
  }

  // system("clear");

  // verifica a quantidade de vezes que o numero aparece no vetorA
  for (i = 0; i < tam1; i++)
  {
    cont = 0;
    for (j = 0; j < tam1; j++)
    {
      if (vetorA[i] == vetorA[j])
      {
        cont++;
      }
    }
    printf("O numero %d foi repetido %d vezes\n", vetorA[i], cont);
  }
  
  return (EXIT_SUCCESS);
}
