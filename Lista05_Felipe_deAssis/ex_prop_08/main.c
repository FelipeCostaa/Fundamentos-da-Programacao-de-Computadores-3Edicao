/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap5, ex8, proposto*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  int idade, somaIdade, qtdA = 0, qtdB = 0, qtdC = 0, qtdD = 0;
  float peso, altura, mediaIdade, olhosAzuis;
  char corOlhos, corCabelo;

  for (int i = 0; i < 6; i++)
  {
    printf("\nInforme os dados da %dª pessoa: ", i + 1);
    printf("\nIdade: ");
    scanf("%d", &idade);
    printf("\nPeso: ");
    scanf("%f%*c", &peso);
    printf("\nAltura: ");
    scanf("%f%*c", &altura);
    printf("\nA - Azul"
           "\nP - Preto"
           "\nV - Verde"
           "\nC - Castanho"
           "\nCor dos Olhos: ");
    scanf(" %c%*c", &corOlhos);
    printf("\nP - Preto"
           "\nC - Castanho"
           "\nL - Loiro"
           "\nR - Ruivo"
           "\nCor do Cabelo: ");
    scanf(" %c%*c", &corCabelo);
    printf("\n============================================");
    if (idade > 50 && peso < 60)
    {
      qtdA++;
    }
    if (altura < 1.5)
    {
      somaIdade += idade;
      qtdB++;
    }
    if (corOlhos == 'A')
    {
      qtdC++;
    }
    if (corCabelo == 'R' && corOlhos != 'A')
    {
      qtdD++;
    }
  }
  mediaIdade = somaIdade / qtdB;
  olhosAzuis = qtdC * 100 / 6;
  printf("\n\tQuantidade de pessoas com idade superior a 50 anos e peso inferior a 60 kg: %d", qtdA);
  printf("\n\tA média da idade das pessoas com altura inferior a 1.50m: %.2f", mediaIdade);
  printf("\n\tA porcentagem de pessoas com olhos azuis entre todas as pessoas analisadas: %.2f", olhosAzuis);
  printf("\n\tA quantidade de pessoas ruivas e que não possuem olhos azuis: %.2f", qtdD);

  return (EXIT_SUCCESS);
}