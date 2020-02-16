/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap5, ex15, resolvido*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  float precoUnid, custoEstocagem, imposto, impostoFinal, precoFinal,
      adicionais, maiorPreco, menorPreco, impostoTotal;
  char refrigeracao, categoria;
  int i, qtdBarato, qtdNormal, qtdCaro;

  qtdBarato = 0;
  qtdNormal = 0;
  qtdCaro = 0;

  custoEstocagem = 6;

  printf("\nCALCULO DE CUSTO");

  for (i = 0; i < 12; i++)
  {
    printf("\n\n------------------------------------");
    printf("\nInsira os dados do produto: ");
    printf("\nPreço unitario: R$");
    scanf("%f%*c", &precoUnid);
    printf("\nRefrigeração: \nS - necessitam de refrigeração \n\t\te \nN - não necessitam de refrigeração: ");
    scanf(" %c%*c", &refrigeracao);
    printf("\nCategoria: \nA - alimentação \nL - limpeza \nV - vestuario: ");
    scanf(" %c%*c", &categoria);

    //custo estocagem
    if (precoUnid < 20.0)
    {
      if (categoria == 'A') //alimentos
      {
        custoEstocagem = 2;
        printf("\n\tCusto de estocagem R$%.2f", &custoEstocagem);
      }
      else if (categoria == 'L') //limpeza
      {
        custoEstocagem = 3;
        printf("\n\tCusto de estocagem R$%.2f", &custoEstocagem);
      }
      else if (categoria == 'V') //vestuario
      {
        custoEstocagem = 4;
        printf("\n\tCusto de estocagem R$%.2f", &custoEstocagem);
      }
    }
    else if (precoUnid >= 20.0 && precoUnid <= 50.0)
    {
      if (refrigeracao == 'S')
      {
        custoEstocagem = 6;
        printf("\n\tCusto de estocagem R$%.2f", &custoEstocagem);
      }
      else if (refrigeracao == 'N')
      {
        custoEstocagem = 0;
        printf("\n\tCusto de estocagem R$%.2f", &custoEstocagem);
      }
    }
    else if (precoUnid > 50)
    {
      if (refrigeracao == 'S')
      {
        if (categoria == 'A')
        {
          custoEstocagem = 5;
          printf("\n\tCusto de estocagem R$%.2f", &custoEstocagem);
        }
        else if (categoria == 'L')
        {
          custoEstocagem = 2;
          printf("\n\tCusto de estocagem R$%.2f", &custoEstocagem);
        }
        else if (categoria == 'V')
        {
          custoEstocagem = 4;
          printf("\n\tCusto de estocagem R$%.2f", &custoEstocagem);
        }
      }
      else if (refrigeracao == 'N')
      {
        if (categoria == 'A' || categoria == 'V')
        {
          custoEstocagem = 0;
          printf("\n\tCusto de estocagem R$%.2f", &custoEstocagem);
        }
        else if (categoria == 'L')
        {
          custoEstocagem = 1;
          printf("\n\tCusto de estocagem R$%.2f", &custoEstocagem);
        }
      }
    }

    //imposto
    if (categoria == 'A' && refrigeracao == 'S')
    {
      imposto = 0.04;
    }
    else
    {
      imposto = 0.02;
    }

    impostoFinal = imposto * precoUnid;
    printf("\n\tImposto R$%.2f", impostoFinal);

    //preço final
    precoFinal = precoUnid + custoEstocagem + impostoFinal;
    printf("\n\tPreço final R$%.2f", precoFinal);

    //classificação
    if (precoFinal < 20)
    {
      printf("\n\tClassificação: Barato");
      qtdBarato++;
    }
    else if (precoFinal >= 20 && precoFinal <= 100)
    {
      printf("\n\tClassificação: Normal");
      qtdNormal++;
    }
    else if (precoFinal > 100)
    {
      printf("\n\tClassificação: Caro");
      qtdCaro++;
    }
    //valores adicionais (custos estocagem, e impostos dos 12 produtos)
    adicionais = adicionais + custoEstocagem + impostoFinal;

    //maior preço
    if (precoFinal > maiorPreco)
    {
      maiorPreco = precoFinal;
    }
    //menor preço
    if (precoFinal < menorPreco)
    {
      menorPreco = precoFinal;
    }

    //imposto total
    impostoTotal += impostoFinal;
  }

  //media valores adicionais
  adicionais /= 12;
  printf("\n\n\n\tMedia dos valores adicioanis R$%.2f", adicionais);

  printf("\n\tTotal dos impostos R$%.2f", impostoTotal);

  printf("\n\tQuantidade de produtos classificados como barato %d", qtdBarato);
  printf("\n\tQuantidade de produtos classificados como normal %d", qtdNormal);
  printf("\n\tQuantidade de produtos classificados como caro %d", qtdCaro);

  return (EXIT_SUCCESS);
}
