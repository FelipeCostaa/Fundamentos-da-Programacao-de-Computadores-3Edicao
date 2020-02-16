/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap5, ex25, resolvido*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  float precoUnitario, imposto, vlrTransporte, vlrSeguro, precoFinal, impostoTotal;
  int paisOrigem;
  char meioDeTransporte, cargaPerigosa;

  imposto = 0;
  vlrTransporte = 0;

  printf("\nPreço unitario: R$");
  scanf("%f%*c", &precoUnitario);
  do
  {
    printf("\n1 - Estados Unidos");
    printf("\n2 - Mexico");
    printf("\n3 - Outros");
    printf("\nPaís de origem: ");
    scanf("%d%*c", &paisOrigem);
    printf("\nT - Terrestre || F - Fluvial || A - Aereo");
    printf("\nMeio de transporte: ");
    scanf(" %c%*c", &meioDeTransporte);
    printf("\nS - Sim || N - Não");
    printf("\nCarga perigosa: ");
    scanf(" %c%*c", &cargaPerigosa);

    if (precoUnitario < 100)
    {
      imposto = precoUnitario * 0.05;
    }
    else
    {
      imposto = precoUnitario * 0.1;
    }
    printf("\n\tImposto R$%.2f", imposto);

    if (cargaPerigosa == 'S')
    {
      if (paisOrigem == 1)
      {
        vlrTransporte = 50;
      }
      else if (paisOrigem == 2)
      {
        vlrTransporte = 21;
      }
      else if (paisOrigem == 3)
      {
        vlrTransporte = 24;
      }
    }
    else if (cargaPerigosa == 'N')
    {
      if (paisOrigem == 1)
      {
        vlrTransporte = 12;
      }
      else if (paisOrigem == 2)
      {
        vlrTransporte = 21;
      }
      else if (paisOrigem == 3)
      {
        vlrTransporte = 60;
      }
    }
    printf("\n\tValor de transporte R$%.2f", vlrTransporte);

    if (paisOrigem == 2 || meioDeTransporte == 'A')
    {
      vlrSeguro = precoUnitario / 2;
      printf("\n\tValor do seguro R$%.2f", vlrSeguro);
    }
    else
    {
      vlrSeguro = 0;
      printf("\n\tValor do seguro R$%.2f", vlrSeguro);
    }

    precoFinal = precoUnitario + imposto + vlrTransporte + vlrSeguro;

    printf("\nPreço unitario: R$");
    scanf("%f%*c", &precoUnitario);
  } while (precoUnitario != 0);

  impostoTotal += imposto;
  printf("\n\n\tTotal de imposto R$%.2f", impostoTotal);

  return (EXIT_SUCCESS);
}
