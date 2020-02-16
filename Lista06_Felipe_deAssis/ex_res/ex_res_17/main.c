/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap6, ex17, resolvido*/

#include <stdio.h>
#include <stdlib.h>

#define tam1 6

int main(int argc, char **argv)
{
  int num[tam1], somaPares = 0, quantidadeImpares = 0;
  int i;
  //recebe valores do vetor
  for (i = 0; i < tam1; i++)
  {
    printf("\n\t%dº numero do vetor: ", i + 1);
    scanf("%d", &num[i]);
  }
  //exibe numeros pares
  printf("\n\tNumeros pares digitados: ");
  for (i = 0; i < tam1; i++)
  {
    if (num[i] % 2 == 0)
    {
      printf("\t%d", num[i]);
      //soma os pares
      somaPares += num[i];
    }
  }
  printf("\n\tA soma dos numeros pares é: %d", somaPares);
  printf("\n\n\tNumeros impares digitados: ");
  //exibe os numeros impares
  for (i = 0; i < tam1; i++)
  {
    if (num[i] % 2 == 1)
    {
      printf("\t%d", num[i]);
      //contador numeros impares
      quantidadeImpares += 1;
    }
  }
  printf("\n\tA quantidade de numeros impares digitados é: %d", quantidadeImpares);

  return (EXIT_SUCCESS);
}
