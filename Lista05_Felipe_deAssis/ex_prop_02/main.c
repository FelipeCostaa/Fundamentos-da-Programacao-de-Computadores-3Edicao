/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap5, ex2, proposto*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  float vlrIngresso, despesas, desconto, novoPrecoIngresso;
  int qtdVendida, aumentoVendas;
  int i = 5;

  vlrIngresso = 5.00;
  despesas = 200;
  qtdVendida = 120;
  desconto = 0.5;
  aumentoVendas = 0;
  novoPrecoIngresso = 0;

  printf("\nValor inicial do ingresso R$%.2f", vlrIngresso);

  while (i > 1)
  {
    printf("\nRetirando R$%.2f", desconto);
    novoPrecoIngresso = vlrIngresso - desconto;
    printf("\nO novo preço do ingresso sera de R$%.2f", novoPrecoIngresso);
    aumentoVendas += 26;
    printf("\nAs vendas aumentariam em %d", aumentoVendas);
    i = 5.00 - 0.50;
  }

  return (EXIT_SUCCESS);
}
