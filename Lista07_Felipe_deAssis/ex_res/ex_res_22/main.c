/*
Autor: Felipe de Assis Costa
RA: 0049539
Data:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define armazens 5
#define produtos 3

int main(int argc, char const *argv[])
{
	int matriz[armazens][produtos];
	float preco[produtos];
	int qtdItemArmazem[armazens - 1], estoqueProd2[armazens - 1], menorEstoque[armazens - 1];
	int maior, menor, posicaoArmazem;

	for (int i = 0; i < armazens; i++)
	{
		printf("\n%dº Armazem: ", i+1);
		for (int j = 0; j < produtos; j++)
		{
			printf("\n%dº Produto: ", j+1);
			printf("\nQuantidade em estoque: ");
			scanf("%d", &matriz[i][j]);
		}
		printf("\n---------------------------");
		system("clear");

		if (i == 3)
		{
			for (int i = 0; i < 3; i++)
			{
				printf("\nPreço do %dº produto: ", i+1);
				scanf("%f", &preco[i]);
			}
			system("clear");
			break;
		}
		
	}

	// quantidade de itens quardados em cada armazém
	for (int i = 0; i < armazens - 1; i++)
	{
		qtdItemArmazem[i] = 0;
		for (int j = 0; j < produtos; j++)
		{
			qtdItemArmazem[i] += matriz[i][j];
		}
		printf("\nQuantidade de itens no armazem nº%d: %d", i+1, qtdItemArmazem[i]);
	}

	// qual armazém possui maior estoque do produto 2
	maior = 0;
	for (int i = 0; i < armazens; i++)
	{
		estoqueProd2[i] = 0;
		for (int j = 0; j < produtos; j++)
		{
			estoqueProd2[i] = matriz[1][j];
			if (estoqueProd2[i] > maior)
			{
				maior = estoqueProd2[i];
			}
			
		}
		
	}
	printf("\n\nMaior estoque do produto nº 2: %d", maior);	

	// qual armazém possui menor estoque
	menor = 99999999;
	for (int i = 0; i < armazens; i++)
	{
		menorEstoque[i] = 0;
		for (int j = 0; j < produtos; j++)
		{
			menorEstoque[i] += matriz[i][j];		
		}

		if (menorEstoque[i] < menor)
		{
			menor = menorEstoque[i];
			posicaoArmazem = i;
		}
		
	}
	printf("\n\nO armazem nº %d possui o menor estoque", posicaoArmazem+1);

	// qual o custo total de cada produto
	
	// qual o custo total de cada armazém
	
	return 0;
}