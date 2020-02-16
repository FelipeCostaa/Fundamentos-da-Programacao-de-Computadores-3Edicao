/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap5, ex21, resolvido*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  int num, soma, quantidade, maiorNum, menorNum, media, mediaNumPar, porcentagemImpar,
      numPar, qtdNumPar, qtdNumImpar;

  quantidade = 0;
  media = 0;
  numPar = 0;
  qtdNumPar = 0;
  qtdNumImpar = 0;

  printf("\n**O programa sera encerrado quando inserir o numero 30000**");

  while (num != 30000)
  {
    printf("\n__________________________________________");
    printf("\nInsira um numero: ");
    scanf("%d%*c", &num);
    soma += num;
    quantidade++;

    if (num > maiorNum)
    {
      maiorNum = num;
    }
    else if (num < menorNum)
    {
      menorNum = num;
    }

    if (num % 2 == 0)
    {
      numPar += num;
      qtdNumPar++;
    }
    else
    {
      qtdNumImpar++;
    }
  }
  media = soma / quantidade;
  porcentagemImpar = qtdNumImpar * 100 / quantidade;
  mediaNumPar = numPar / qtdNumPar;
  printf("\n\tSoma dos numeros: %d", soma);
  printf("\n\tQuantidade de numeros digitados: %d", quantidade);
  printf("\n\tMedia dos numeros digitados: %d", media);
  printf("\n\tMaior numero digitado: %d", maiorNum);
  printf("\n\tMenor numero digitado: %d", menorNum);
  printf("\n\tMedia dos numeros pares: %d", mediaNumPar);
  printf("\n\tPorcentagem de numeros impares: %d", porcentagemImpar);

  return (EXIT_SUCCESS);
}
