/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap6, ex1, resolvido*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  int i = 0, j, cont, num[8], resto;

  //armazena os valores dentro da variavel num
  for (i = 0; i < 9; i++)
  {
    printf("\nInsira um numero: ");
    scanf("%d%*c", &num[i]);
  }

  while (i < 9)
  {
    cont = 0;
    for (j = 0; j < num[i]; i++)
    {
      resto = num[i] % 2;
      if (resto == 0) //verifica se o numero é primo
      {
        cont++;
      }
    }
    if (cont <= 2)
    {
      printf("\n\tO numero %d é primo e está na posição %d", num[i], i);
    }
    i++;
  }
  return (EXIT_SUCCESS);
}
