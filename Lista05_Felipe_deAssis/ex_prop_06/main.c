/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap5, ex6, proposto*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  char codigo;
  float valor, valorTotal, valorAPrazo, valorTodasPrimeirasParcelas;
  int qtdTransacoes, qtdComprasAVista, qtdComprasAPrazo;

  qtdTransacoes = 1;
  qtdComprasAVista = 0;
  qtdComprasAPrazo = 0;
  valorTotal = 0;
  valorAPrazo = 0;
  valorTodasPrimeirasParcelas = 0;

  while (qtdTransacoes <= 15)
  {
    printf("\nV - Transação a vista");
    printf("\nP - Transação a prazo");
    printf("\nInforme o tipo de transação: ");
    scanf(" %c%*c", &codigo);
    printf("\nInforme o valor da mercadoria: R$");
    scanf("%f%*c", &valor);
    printf("_________________________________________________");
    qtdTransacoes++;
    //letra A
    if (codigo == 'V')
    {
      qtdComprasAVista++;
    }
    //letra B
    else if (codigo == 'P')
    {
      qtdComprasAPrazo++;
      //letra D
      valorAPrazo = valor / 3;
    }
    //letra C
    valorTotal = valorTotal + valor;
    //letra D
    valorTodasPrimeirasParcelas = valorTodasPrimeirasParcelas + valorAPrazo;
  }
  printf("\n\tTotal de compras a vista: %d", qtdComprasAVista);        //letra A
  printf("\n\tTotal de compras a prazo: %d", qtdComprasAPrazo);        //letra B
  printf("\n\tValor total das compras realizadas R$%.2f", valorTotal); //letra C
  printf("\n\tValor total da primeira prestação das compras a prazo: R$%.2f",
         valorTodasPrimeirasParcelas); //letra D

  return (EXIT_SUCCESS);
}