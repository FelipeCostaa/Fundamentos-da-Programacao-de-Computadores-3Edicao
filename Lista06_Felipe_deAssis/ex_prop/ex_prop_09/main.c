/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam1 3
#define tam2 64 // quantidade de caracteres

int main(int argc, char const *argv[])
{
	char nomeProduto[tam1][tam2];
  int codigoProduto[tam1];
  float precoProduto[tam1], novoPreco[tam1];
  int i;

  for (i = 0; i < tam1; i++)
  {
    printf("\n\n\nInforme os dados: ");
    setbuf(stdin, NULL);
    printf("\nNome produto: ");
    scanf("%[^\n]s", &nomeProduto[i]);
    setbuf(stdin, NULL);
    printf("\nCodigo produto: ");
    scanf("%d", &codigoProduto);
    printf("\nPreço produto: R$");
    scanf("%f", &precoProduto);
    system("clear");

    if (codigoProduto[i] % 2 == 0)
    {
      if (precoProduto[i] > 1000)
      {
        // recebe aumento 20%
        novoPreco[i] = precoProduto[i] * 0.2;
        printf("\nProduto: %s", nomeProduto[i]);
        printf("\nCodigo: %d", codigoProduto[i]);
        printf("\nPreço antigo: %.2f", precoProduto[i]);
        printf("\nNovo preço: %.2f", novoPreco[i]);
      }
      break;
    }
    if (codigoProduto[i] % 2 == 0)
    {
      // recebe aumento 15%
      novoPreco[i] = precoProduto[i] * 0.15;
      printf("\nProduto: %s", nomeProduto[i]);
      printf("\nCodigo: %d", codigoProduto[i]);
      printf("\nPreço antigo: %.2f", precoProduto[i]);
      printf("\nNovo preço: %.2f", novoPreco[i]);
      break;
    }
    if (precoProduto[i] > 1000)
    {
      // recebe aumento 10%
      novoPreco[i] = precoProduto[i] * 0.1;
      printf("\nProduto: %s", nomeProduto[i]);
      printf("\nCodigo: %d", codigoProduto[i]);
      printf("\nPreço antigo: %.2f", precoProduto[i]);
      printf("\nNovo preço: %.2f", novoPreco[i]);
      break;
    }
  }
  
	return 0;
}