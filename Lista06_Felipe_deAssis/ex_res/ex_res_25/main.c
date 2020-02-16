/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap6, ex1, resolvido*/

// gerar os dez primeiros numeros primos acima de 100

#include <stdio.h>
#include <stdlib.h>

#define tam1 10

int main(int argc, char **argv)
{
  int primos[tam1];
  int i, qtde, num, divisores;

  num = 101;
  qtde = 1;

  do
  {
    divisores = 0;
    for (i = 1; i <= num; i++)
    {
      if (num % 2 == 0)
      {
        divisores++;
      }
      if (divisores <= 2)
      {
        primos[qtde] = num;
        qtde++;
      }
      num++;
    }
  } while (qtde = 11);
  
  for (i = 1; i <= tam1; i++)
  {
    printf("Primos: %d", primos[i]);
  }
  
  return (EXIT_SUCCESS);
}
