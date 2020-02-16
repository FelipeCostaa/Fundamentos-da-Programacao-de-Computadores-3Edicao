/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam1 10

int main(int argc, char const *argv[])
{
	int codProduto[tam1], totalEstoqueProduto[tam1];
  int verificacaoCodProduto, verificacaoQtde;
  int codCliente;
  int i;

  printf("\nInforme os dados dos produtos: ");
  for (i = 0; i < tam1; i++)
  {
    printf("\nCodigo: ");
    scanf("%d", &codProduto[i]);
    printf("\nTotal em estoque: ");
    scanf("%d", &totalEstoqueProduto[i]);
    printf("\n\n---------------------------------------");
    system("clear");
  }

  system("clear");

  printf("\n\n\tCodigo:\t\tQtde Estoque: ");
  for (i = 0; i < tam1; i++)
  {
    printf("\n\t%d\t-\t%d", codProduto[i], totalEstoqueProduto[i]);
  }
  printf("\n---------------------------------------");

  printf("\n");
  printf("\nCaso deseje sair do programa \nInforme '0' no 'Codigo do Cliente'");
  printf("\n\nDados da venda: ");

  do
  {
    printf("\n\n\nCodigo do cliente: ");
    scanf("%d", &codCliente);
    if (codCliente == 0)
    {
      break;
    }
    
    printf("\nCodigo do produto: ");
    scanf("%d", &verificacaoCodProduto);
    for (i = 0; i < tam1; i++)
    {
      if (verificacaoCodProduto == codProduto[i])
      {
        printf("\nQuantidade: ");
        scanf("%d", &verificacaoQtde);
        if (verificacaoQtde <= totalEstoqueProduto[i])
        {
          printf("\nPedido atendido.\nObrigado e volte sempre.");
          totalEstoqueProduto[i] -= verificacaoQtde;
          break;
        }
        else
        {
          printf("\nNão temos estoque suficiente dessa mercadoria.\n");
          break;
        }
      }
      if (i == tam1 - 1 && verificacaoCodProduto != codProduto[i])
      {
        printf("\nERRO! Codigo Inexistente.\n");
        break;
      }
    }
  } while (codCliente != 0);

  system("clear");

  printf("\nAtualização do estoque apos as vendas: ");
  printf("\n\n\tCodigo:\t\tQtde Estoque: ");
  for (i = 0; i < tam1; i++)
  {
    printf("\n\t%d\t-\t%d", codProduto[i], totalEstoqueProduto[i]);
  }
  printf("\n---------------------------------------");    
    
	return 0;
}