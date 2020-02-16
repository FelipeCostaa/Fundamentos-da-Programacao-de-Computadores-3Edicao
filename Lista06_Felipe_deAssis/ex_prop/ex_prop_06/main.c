/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam1 5
#define tam2 64

int main(int argc, char const *argv[])
{
  float percentualComissao[tam1], totalVendas[tam1], valoresComissao[tam1];
  char nomeVendedor[tam1][tam2];
  int i;
  float total, totalVendedor[tam1];
  float maiorValor, menorValor;
  int posicaoMaior, posicaoMenor;

  for (i = 0; i < tam1; i++)
  {
    printf("\nInforme os dados: \n");

    setbuf(stdin, NULL); // limpar o buffer
    printf("\nNome do %dº vendedor: ", i + 1);
    scanf("%[^\n]", &nomeVendedor[i]);
    setbuf(stdin, NULL); // limpar o buffer
    printf("\nPercentual de comissão: ");
    scanf("%f", &percentualComissao[i]);
    printf("\nTotal de vendas: ");
    scanf("%f", &totalVendas[i]);
    printf("\n----------------------------------");
    system("clear");
  }

  for (i = 0; i < tam1; i++)
  {
    valoresComissao[i] = (percentualComissao[i] / 100) * totalVendas[i];
  }
  
  printf("\nRelatorio: ");
  printf("\nNome Vendedor\t\tValor a Receber Referente a Comissão");
  for (i = 0; i < tam1; i++)
  {
    printf("\n%s\t\t\t%.2f", nomeVendedor[i], valoresComissao[i]);
  }

  printf("\nTotal das vendas de todos o vendedores: ");
  for (i = 0; i < tam1; i++)
  {
    total = totalVendas[i] + valoresComissao[i];
    totalVendedor[i] = totalVendas[i] + valoresComissao[i];
  }
  printf("\nR$%.2f", total);

  maiorValor = 0;
  menorValor = 999999999;

  posicaoMaior = 0;
  posicaoMenor = 0;
  for (i = 0; i < tam1; i++)
  {
    if (totalVendedor[i] > maiorValor)
    {
      maiorValor = totalVendedor[i];
      posicaoMaior = i;
    }
    if (totalVendedor[i] < menorValor)
    {
      menorValor = totalVendedor[i];
      posicaoMenor = i;
    }    
  }
  printf("\nO funcionario %s recebera o maior valor de: R$%.2f", nomeVendedor[posicaoMaior], maiorValor);
  printf("\nO funcionario %s recebera o menor valor de: R$%.2f", nomeVendedor[posicaoMenor], maiorValor);
  
	return 0;
}