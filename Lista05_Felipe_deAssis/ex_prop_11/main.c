/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap5, ex11, proposto*/

#include <stdio.h>
#include <stdlib.h>

#define tam 10

int main(int argc, char **argv)
{
  float valorCarro, precoFinal, valorParcela, precoFinalAVista, desconto = 0.2, percentualAcrescimo = 0.03;
  int quantidadeParcelas = 6;

  printf("\nInforme o valor do carro: R$");
  scanf("%f", &valorCarro);
  precoFinalAVista = valorCarro - (valorCarro * desconto);
  printf("\n\tPreço a vista: R$%.2f", precoFinalAVista);

  printf("\n\tTabela de valores parcelado: ");

  for (int i = 0; i < tam; i++)
  {
    printf("\n\t%d parcelas = valor final R$%.2f", quantidadeParcelas, valorCarro + valorCarro * percentualAcrescimo);
    quantidadeParcelas += 6;
    percentualAcrescimo += 0.03;
  }

  return (EXIT_SUCCESS);
}