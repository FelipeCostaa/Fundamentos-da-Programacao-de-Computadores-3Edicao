/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap5, ex5, proposto*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  int i, j, multiplicacao, divisao, soma, subtracao, num = 1;

  for (i = 1; i <= 10; i++)
  {
    //multiplicação
    for (j = 1; j <= 10; j++)
    {
      multiplicacao = num * j;
      printf("\n\t%d * %d = %d", num, j, multiplicacao);
    }
    //divisão
    for (j = 1; j <= 10; j++)
    {
      divisao = num / j;
      printf("\n\t%d / %d = %d", num, j, divisao);
    }
    //soma
    for (j = 1; j <= 10; j++)
    {
      soma = num + j;
      printf("\n\t%d + %d = %d", num, j, soma);
    }
    //subtração
    for (j = 0; j <= 10; j++)
    {
      subtracao = num - j;
      printf("\n\t%d - %d = %d", num, j, subtracao);
    }
  }

  return (EXIT_SUCCESS);
}
