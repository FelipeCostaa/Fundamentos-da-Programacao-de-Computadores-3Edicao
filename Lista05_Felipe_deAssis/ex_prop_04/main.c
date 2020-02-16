/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap5, ex4, proposto*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{

  int num, mult, div, soma, sub;
  int i;

  printf("\nDigite o numero que deseja saber a tabuada: ");
  scanf("%d%*c", &num);

  printf("\nTabuada do numero %d", num);

  //multiplicação
  printf("\n\tMULTIPLICAÇÃO: ");
  for (i = 0; i <= 10; i++)
  {
    mult = 0;
    mult = num * i;
    printf("\n%d * %d = %d", num, i, mult);
  }
  //divisão
  printf("\n\tDIVISÃO: ");
  for (i = 0; i <= 10; i++)
  {
    div = 0;
    div = num / i++;
    printf("\n%d / %d = %d", num, i, div);
  }
  //soma
  printf("\n\tSOMA: ");
  for (i = 0; i <= 10; i++)
  {
    soma = 0;
    soma = num + i;
    printf("\n%d + %d = %d", num, i, soma);
  }
  //subtração
  printf("\n\tSUBTRAÇÃO: ");
  for (i = 0; i <= 10; i++)
  {
    sub = 0;
    sub = num - i;
    printf("\n%d - %d = %d", num, i, sub);
  }

  return (EXIT_SUCCESS);
}
