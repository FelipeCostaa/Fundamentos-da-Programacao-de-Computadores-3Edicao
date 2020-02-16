/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap6, ex1, resolvido*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam 5

int main(int argc, char **argv)
{
  char veiculo[tam];
  float consumo[tam], menorConsumo, menorVeiculo, valor[tam];
  int i;

  printf("\nInforme os modelos de carro: ");
  for (i = 1; i <= tam; i++)
  {
    printf("\n%dº Modelo: ", i);
    scanf(" %s*%c", &veiculo[i]);
    printf("\nConsumo: ");
    scanf("%f*%c", &consumo[i]);
    valor[i] = 1000 / consumo[i];
    printf("--------------------------------------");
  }
  menorConsumo = consumo[1];
/*
  for (i = 1; i <= tam; i++)
  {
    if (consumo[i] < menorConsumo)
    {
      menorConsumo = consumo[i];
      //menorVeiculo = i;
      veiculo[i];
      valor[i];
    }
  }
*/
  printf("\n\tO veiculo %s consome %.2f litros de combustivel para "
         "percorrer 1000Km", veiculo[i], valor[i]);

  return (EXIT_SUCCESS);
}
