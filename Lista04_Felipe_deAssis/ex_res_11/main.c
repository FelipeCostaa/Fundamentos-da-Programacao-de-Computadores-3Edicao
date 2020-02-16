/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap5, ex11, resolvido*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  int num, qtd, resto;
  int i;

  printf("\nVerificar se o numero é primo ou não\n");
  printf("\nInforme um numero: ");
  scanf("%d%*c", &num);

  for (i = 1; i <= num; i++)
  {
    resto = num % i;
    if (num == 0)
    {
      qtd++;
    }
  }
  if (qtd > 2 || num == 4)
  {
    printf("\n\tNumero não primo");
  }
  else
  {
    printf("\n\tNumero primo");
  }

  return (EXIT_SUCCESS);
}
