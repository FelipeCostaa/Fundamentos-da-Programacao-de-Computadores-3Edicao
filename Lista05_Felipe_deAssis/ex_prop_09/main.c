/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap5, ex9, proposto*/

#include <stdio.h>
#include <stdlib.h>

#define quantidade 10

int main(int argc, char **argv)
{
  int idade, quantidadePesoAltura = 0;
  float peso, altura, mediaIdade = 0;

  for (int i = 0; i < quantidade; i++)
  {
    printf("\nInforme os dados: \n");
    printf("\nIdade: ");
    scanf("%d", &idade);
    printf("\nPeso: ");
    scanf("%f", &peso);
    printf("\nAltura: ");
    scanf("%f", &altura);
    printf("==================================");

    mediaIdade += idade;

    if (peso > 90 && altura < 1.5)
    {
      quantidadePesoAltura++;
    }
  }

  mediaIdade = mediaIdade / quantidade;
  printf("\n\tA media de idade é %.2f", mediaIdade);
  printf("\n\tA quantidade de pessoas com peso maior que 90kg e altura inferior a 1.5mts é %d", quantidadePesoAltura);

  return (EXIT_SUCCESS);
}