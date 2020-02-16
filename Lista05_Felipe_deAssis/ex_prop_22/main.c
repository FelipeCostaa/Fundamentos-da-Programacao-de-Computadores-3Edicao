/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap5, ex22, proposto*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  int idade, cont1 = 0;
  float altura, totalAltura, mediaAltura = 0;

  do
  {
    printf("\nInforme os dados: ");
    printf("\nIdade: ");
    scanf("%d", &idade);
    if (idade > 0)
    {
      printf("\nAltura: ");
      scanf("%f", &altura);
    }

    if (idade > 50)
    {
      cont1++;
      totalAltura += altura;
    }
  } while (idade > 0);

  mediaAltura = totalAltura / cont1;

  printf("\n\tA media de altura das pessoas acima dos 50 anos é: %.2f", mediaAltura);

  return (EXIT_SUCCESS);
}