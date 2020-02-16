/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap5, ex7, proposto*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  int idade, cont, idadeMaiorQue50, cont40;
  float altura, peso, mediaAltura, totalAltura, porecentagemPesoMenorQue40Kg;

  cont = 1;
  idadeMaiorQue50 = 0;
  totalAltura = 0;
  cont40 = 0;

  while (cont <= 5)
  {
    printf("\nInforme os dados das pessoas: ");
    printf("\nIdade: ");
    scanf("%d", &idade);
    printf("\nAltura: ");
    scanf("%f", &altura);
    printf("\nPeso: ");
    scanf("%f", &peso);
    printf("________________________________________");
    cont++;
    //letra A
    if (idade > 50)
    {
      idadeMaiorQue50++;
    }
    //letra B
    if (idade > 10 && idade < 20)
    {
      totalAltura = totalAltura + altura;
    }
    if (peso < 40.0)
    {
      cont40++;
      porecentagemPesoMenorQue40Kg = cont40 * 100 / 5;
    }
  }
  mediaAltura = totalAltura / 5;
  printf("\n\tQuantidade de pessoas com idade superior a 50 anos: %d", idadeMaiorQue50); //letra A
  printf("\n\tMedia da altura das pessoas entre 10 e 20 anos: %.2f", mediaAltura); //letra B
  printf("\n\tPorcentagem de pessoas com peso menor que 40Kg: %.3f", porecentagemPesoMenorQue40Kg);

  return (EXIT_SUCCESS);
}
