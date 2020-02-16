/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap5, ex23, resolvido*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  float sal, qtd, tipo, valorKw, gasto, acresc, total, totalGeral, qtdCons;

  totalGeral = 0;
  qtdCons = 0;

  printf("\nInforme o valor do salario minimo: R$");
  scanf("%f%*c", &sal);
  printf("\nQuantidade de quilowatts gasta: ");
  scanf("%f%*c", &qtd);
  valorKw = sal / 8;

  while (qtd != 0)
  {
    gasto = qtd * valorKw;
    printf("\nTIPO          %% DE ACRESCIMO SOBRE O");
    printf("\n                      VALOR GASTO");
    printf("\n  1                       5");
    printf("\n  2                       10");
    printf("\n  3                       15\n");

    printf("\nInforme o tipo: ");
    scanf("%f%*c", &tipo);
    if (tipo == 1)
    {
      acresc = gasto * 5 / 100;
    }
    else if (tipo == 3)
    {
      acresc = gasto * 10 / 100;
    }
    else if (tipo == 3)
    {
      acresc = gasto * 15 / 100;
    }
    total = gasto + acresc;
    totalGeral = totalGeral + total;
    if (total >= 500 && total <= 1000)
    {
      qtdCons++;
    }
    printf("\n\tQuantidade gasto: R$%.2f", gasto);
    printf("\n\tAcrescimo: R$%.2f", acresc);
    printf("\n\tTotal: %.2f", total);
    printf("\nQuantidade de quilowatts gasta: ");
    scanf("%f%*c", &qtd);
  }
  printf("\n\tFaturamento geral da empresa R$%.2f", totalGeral);
  printf("\n\tQuantidade de consumidores que pagam entre R$500 e R$1000: %.0f", qtdCons);

  return (EXIT_SUCCESS);
}
