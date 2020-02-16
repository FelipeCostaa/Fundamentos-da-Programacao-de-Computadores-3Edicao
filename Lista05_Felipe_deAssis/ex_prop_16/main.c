/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap5, ex16, proposto*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  int idade, contIdade = 0, totalIdade = 0;
  float mediaIdades = 0;

  printf("\nInforme zero caso deseja encerrar o programa.");
  do
  {
    printf("\nInforme a idade: ");
    scanf("%d", &idade);
    totalIdade += idade;
    contIdade + 1;
  } while (idade != 0);

  mediaIdades = totalIdade / contIdade;
  printf("\n\tA media das idades informadas é: %d", mediaIdades);

  return (EXIT_SUCCESS);
}