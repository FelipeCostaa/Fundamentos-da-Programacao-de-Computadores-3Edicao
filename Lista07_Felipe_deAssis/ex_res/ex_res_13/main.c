/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam1 5
#define tam2 4
#define tam3 64

int main(int argc, char const *argv[])
{
	float precoProdutosLojas[tam1][tam2], custoTransporte[tam1], impostos[tam1][tam2];
	char nomesProdutos[tam1][tam3];
	int i, j, k;

	// nome de 5 produtos 
	for (i = 0; i < tam1; i++)
	{
		printf("\nNome do produto: ");
		// scanf("%s", nomes[i][tam3]);
		setbuf(stdin, NULL); //Limpar buffer teclado
		gets(nomesProdutos[i]);
		
		printf("\nCusto de tranporte: ");	
		scanf("%f", &custoTransporte[i]);
	}
	
	// preço de 5 produtos em 4 lojas diferentes
	for (i = 0; i < tam2; i++)
	{
		printf("\n%dª Loja: ", i+1);
		for (j = 0; j < tam1; j++)
		{
			printf("\nProduto: %s "
						 "\nPreço: R$", nomesProdutos[j]);
			scanf("%f", &precoProdutosLojas[j]);

			if (precoProdutosLojas[i][j] < 50)
			{
				impostos[i][j] = 0.05;
			}
			else if (precoProdutosLojas[i][j] >= 50 && precoProdutosLojas[i][j] <= 100)
			{
				impostos[i][j] = 0.10;
			}
			else
			{
				impostos[i][j] = 0.20;
			}
			
		}
		printf("\n---------------------------------");
	}

	// relatorio 
	for (i = 0; i < tam1; i++)
	{
		printf("\nLoja: %dª", i+1);
		for (j = 0; j < tam1; j++)
		{
			printf("\nNome do produto: %s", nomesProdutos[j]);
			printf("\nImposto: R$%.2f", impostos[i][j] * precoProdutosLojas[i][j]);
			printf("\nCusto de tranporte: R$%.2f", custoTransporte[j]);
			printf("\nPreço: R$%.2f", precoProdutosLojas[i][j]);
			printf("\nPreço final: R$%.2f", precoProdutosLojas[i][j] + impostos[i][j] + custoTransporte[j]);
			printf("\n");
		}
		printf("\n---------------------------------");
	}
	

		
	return 0;
}