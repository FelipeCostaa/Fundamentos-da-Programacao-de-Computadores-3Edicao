/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap6, ex20, resolvido*/

#include <stdio.h>
#include <stdlib.h>

#define tam1 5

int main(int argc, char **argv)
{
  int vetor[tam1], codigo;
  int i;

  for (i = 0; i < tam1; i++)
  {
    printf("\n%dº numero do vetor: ", i + 1);
    scanf("%d", &vetor[i]);
  }
  printf("\n0 - Finalizar\n1 - Ordem Direta\n2 - Ordem Inversa\n--> ");
  scanf("%d", &codigo);
  if (codigo == 0 || codigo > 2)
  {
    printf("\n\tPrograma Finalizado");
    exit(1);
  }
  else if (codigo == 1)
  {
    printf("\n\tOrdem direta: \n");
    for (i = 0; i < tam1; i++)
    {
      printf("\t %d ", vetor[i]);
    }
  }
  else if (codigo == 2)
  {
    for (i = tam1 - 1; i >= 0; i--)
    {
      printf("\t %d ", vetor[i]);
    }
  }

  return (EXIT_SUCCESS);
}
